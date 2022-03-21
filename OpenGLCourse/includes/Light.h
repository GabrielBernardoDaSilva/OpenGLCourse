#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <GL/glew.h>
#include <glm/glm.hpp>

class Light
{
private:
    glm::vec3 colour;
    glm::vec3 direction;

    GLfloat ambientIntensity;
    GLfloat diffuseIntensity;

public:
    Light();
    Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat xDir, GLfloat yDir, GLfloat zDir, GLfloat dIntensity);
    ~Light();

    void UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColourLocation, GLfloat diffuseIntensityLocation, GLfloat directionLocation);
};

#endif // __LIGHT_H__