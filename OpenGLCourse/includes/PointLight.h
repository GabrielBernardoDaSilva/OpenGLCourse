#ifndef __POINTLIGHT_H__
#define __POINTLIGHT_H__

#include "Light.h"

class PointLight: public Light
{
public:
    PointLight();
    PointLight(GLfloat red, GLfloat green, GLfloat blue,
               GLfloat aIntensity, GLfloat dIntensity,
               GLfloat xPos, GLfloat yPos, GLfloat zPos,
               GLfloat con, GLfloat lin, GLfloat exp);
    ~PointLight();

    void UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
                          GLuint diffuseIntensityLocation, GLuint positionLocation,
                          GLuint constantLocation, GLuint linearLocation, GLuint exponentLocation);

private:
    glm::vec3 position;

    GLfloat constant;
    GLfloat linear;
    GLfloat exponent;
};

#endif // __POINTLIGHT_H__