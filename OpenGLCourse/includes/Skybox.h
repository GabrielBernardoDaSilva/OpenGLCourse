#ifndef __SKYBOX_H__
#define __SKYBOX_H__

#include "CommonValues.h"
#include "Mesh.h"
#include "Shader.h"

#include <vector>
#include <string>

#include <GL/glew.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Skybox
{
public:
    Skybox();

    Skybox(std::vector<std::string> faceLocations);

    void DrawSkybox(glm::mat4 viewMatrix, glm::mat4 projectionMatrix);

    ~Skybox();

private:
    Mesh* skyMesh;
    Shader* skyShader;

    GLuint textureId;
    GLuint uniformProjection, uniformView;
};

#endif // __SKYBOX_H__