#define STB_IMAGE_IMPLEMENTATION

#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Mesh.h"
#include "Shader.h"
#include "Window.h"
#include "Camera.h"
#include "Texture.h"
#include "Light.h"

#define PI 3.14159265f

const float toRadins = PI / 180.0f;

Window mainWindow;
std::vector<Mesh *> meshList;
std::vector<Shader> shaderList;
Camera camera;

Texture brickTexture;
Texture dirtTexture;

Light mainLight;

GLfloat deltaTime = 0.0f;
GLfloat lastTime = 0.0f;

// Vertex shader
static const char *vShader = "Shaders/shader.vert";
// Fragament Shaders
static const char *fShader = "Shaders/shader.frag";

void calcAvarageNormals(unsigned int* indices, unsigned int indiceCount, unsigned int* vertices, unsigned int verticesCount, unsigned int vLength, unsigned int normalOffset)
{
	
}

void createObjects()
{
	unsigned int indices[] = {
		0, 3, 1,
		1, 3, 2,
		2, 3, 0,
		0, 1, 2};

	GLfloat vertices[] = {
	//	x      y      z			u	  v     nx	  ny	nz
		-1.0f, -1.0f, 0.0f,		0.0f, 0.0f, 0.0f, 0.0f, 0.0f,	
		 0.0f, -1.0f, 1.0f,		0.5f, 0.0f, 0.0f, 0.0f, 0.0f,
		 1.0f, -1.0f, 0.0f,		1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
		 0.0f,  1.0f, 0.0f,		0.5f, 1.0f, 0.0f, 0.0f, 0.0f
	};
	


	Mesh *obj1 = new Mesh();
	obj1->CreateMesh(vertices, indices, 20, 12);
	meshList.push_back(obj1);
	Mesh *obj2 = new Mesh();
	obj2->CreateMesh(vertices, indices, 20, 12);
	meshList.push_back(obj2);
}

void createShaders()
{
	Shader *shader1 = new Shader();
	shader1->CreateFromFile(vShader, fShader);
	shaderList.push_back(*shader1);
}

int main()
{

	mainWindow = Window();
	mainWindow.Initialise();

	createObjects();
	createShaders();
	camera = Camera(glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f), -90.0f, 0.0f, 1.0f, 0.25f);

	brickTexture = Texture("Texture/brick.png");
	brickTexture.LoadTexture();
	dirtTexture = Texture("Texture/dirt.png");
	dirtTexture.LoadTexture();

	mainLight = Light(1.0f, 1.0f, 1.0f, 1.0f);

	GLuint uniformProjection = 0, uniformModel = 0, uniformView = 0, uniformAmbientIntensity = 0, uniformAmbientColour = 0;
	glm::mat4 projection = glm::perspective(45.0f, (GLfloat)(mainWindow.GetBufferWidth() / mainWindow.GetBufferHeight()), 0.1f, 100.0f);



	while (!mainWindow.GetShouldClose())
	{
		GLfloat now = glfwGetTime(); // get time
		deltaTime = now - lastTime;	 // actual time minus last time
		lastTime = now;
		// get and handle input events
		glfwPollEvents();

		camera.KeyControl(mainWindow.GetKeys(), deltaTime);
#ifdef _WIN32
		camera.MouseControl(mainWindow.GetXChanges(), mainWindow.GetYChanges());
#elif __unix__
		camera.CameraControlKeyboard(mainWindow.GetKeys(), deltaTime);
#endif

		// clear windows
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		shaderList[0].UseShader();
		uniformModel = shaderList[0].GetModelLocation();
		uniformProjection = shaderList[0].GetProjectionLocation();
		uniformView = shaderList[0].GetViewLocation();
		uniformAmbientIntensity = shaderList[0].GetAmbientIntensityLocation();
		uniformAmbientColour = shaderList[0].GetAmbientColourLocation();


		mainLight.UseLight(uniformAmbientIntensity, uniformAmbientColour);

		glm::mat4 model(1.0f);


		model = glm::translate(model, glm::vec3(0.0f, 0.0f, -2.5f));
		// model = glm::rotate(model, currentAngle * toRadins, glm::vec3(0.0f, 1.0f, 0.0f));
		model = glm::scale(model, glm::vec3(0.4f, 0.4f, 1.0f));
		// make the transformation
		glUniformMatrix4fv(uniformModel, 1, GL_FALSE, glm::value_ptr(model));
		glUniformMatrix4fv(uniformProjection, 1, GL_FALSE, glm::value_ptr(projection));
		glUniformMatrix4fv(uniformView, 1, GL_FALSE, glm::value_ptr(camera.CalculateViewMatrix()));
		brickTexture.UseTexture();
		meshList[0]->RenderMesh();

		model = glm::mat4(1.0f);
		model = glm::translate(model, glm::vec3(0.0f, 1.0f, -2.5f));
		// model = glm::rotate(model, currentAngle * toRadins, glm::vec3(0.0f, 1.0f, 0.0f));
		model = glm::scale(model, glm::vec3(0.4f, 0.4f, 1.0f));

		glUniformMatrix4fv(uniformModel, 1, GL_FALSE, glm::value_ptr(model));
		dirtTexture.UseTexture();
		meshList[1]->RenderMesh();

		glUseProgram(0);

		mainWindow.SwapBuffers();
	}

	return 0;
}
