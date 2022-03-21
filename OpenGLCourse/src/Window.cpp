#include "Window.h"


Window::Window()
{
    width = 800;
    height = 600;
	for (size_t i = 0; i < 1024; i++)
		keys[i] = false;
	
	
}

Window::Window(GLint windowWidth, GLint windowHeight): width(windowWidth), height(windowHeight)
{
	for (size_t i = 0; i < 1024; i++)
		keys[i] = false;

}

int Window::Initialise()
{
	if (!glfwInit())
	{
		std::cout << "GLFW init failed!\n";
		glfwTerminate();
		return 1;
	}
	//open gl versions
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// core profile = no backward compitlenble
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//allow forward compatibility
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	mainWindow = glfwCreateWindow(width, height, "TEST Win", nullptr, nullptr);
	if (!mainWindow)
	{
		std::cout << "GLFW Creation Windows Failed!\n";
		glfwTerminate();
		return 1;
	}

	//get buffer size info
	glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

	CreateCallbacks();
	glfwSetInputMode(mainWindow, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

	//set context for glew to use
	glfwMakeContextCurrent(mainWindow);

	//allow modern feature
	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK) {
		std::cout << "GLEW init failed!\n";
		glfwDestroyWindow(mainWindow);
		glfwTerminate();
		return 1;
	}

	glEnable(GL_DEPTH_TEST);

	//setup viewport size
	glViewport(0, 0, bufferWidth, bufferHeight);
	glfwSetWindowUserPointer(mainWindow, this);
	return 0;
}

GLfloat Window::GetXChanges()
{
	GLfloat theChange = xChange;
	xChange = 0.0f;
	return theChange;
}

GLfloat Window::GetYChanges()
{
	GLfloat theChange = yChange;
	yChange = 0.0f;
	return theChange;
}

void Window::CreateCallbacks()
{
	glfwSetKeyCallback(mainWindow, HandleKeys);
	glfwSetCursorPosCallback(mainWindow, HandleMouse);
}

void Window::HandleKeys(GLFWwindow* window, int key, int code, int action, int mode)
{
	Window* theWindow = static_cast<Window*>(glfwGetWindowUserPointer(window));
	if (key == GLFW_KEY_Q && action == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, GL_TRUE);
	}
	if (key >= 0 && key < 1024) {
		if (action == GLFW_PRESS) {
			theWindow->keys[key] = true;
			
		}
		else if (action == GLFW_RELEASE) {
			theWindow->keys[key] = false;
			
		}
	}
		
}

void Window::HandleMouse(GLFWwindow* window, double xPos, double yPos)
{
	Window* theWindow = static_cast<Window*>(glfwGetWindowUserPointer(window));

	if (theWindow->mouseFirstMoved)
	{
		theWindow->lastX = static_cast<GLfloat>(xPos);
		theWindow->lastY = static_cast<GLfloat>(yPos);
		theWindow->mouseFirstMoved = false;
	}

	theWindow->xChange = static_cast<GLfloat>((xPos - theWindow->lastX));
	theWindow->yChange = static_cast<GLfloat>((theWindow->lastY - yPos));

	theWindow->lastX = static_cast<GLfloat>(xPos);
	theWindow->lastY = static_cast<GLfloat>(yPos);

	
}


Window::~Window()
{
	glfwDestroyWindow(mainWindow);
	glfwTerminate();
}
