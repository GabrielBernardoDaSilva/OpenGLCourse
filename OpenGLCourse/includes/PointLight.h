#ifndef __POINTLIGHT_H__
#define __POINTLIGHT_H__

#include "Light.h"
#include "OmniShadowMap.h"


#include <vector>

class PointLight : public Light
{
public:
    PointLight();
    PointLight(
        GLuint shadowWidth, GLuint shadowHeight,
        GLfloat near, GLfloat far,
        GLfloat red, GLfloat green, GLfloat blue,
        GLfloat aIntensity, GLfloat dIntensity,
        GLfloat xPos, GLfloat yPos, GLfloat zPos,
        GLfloat con, GLfloat lin, GLfloat exp);
    ~PointLight();

    void UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
                  GLuint diffuseIntensityLocation, GLuint positionLocation,
                  GLuint constantLocation, GLuint linearLocation, GLuint exponentLocation);

    std::vector<glm::mat4> CalculateLightTransform();

    GLfloat GetFarPlane() { return farPlane; }
    glm::vec3 GetPosition() { return position; }

protected:
    glm::vec3 position;

    GLfloat constant;
    GLfloat linear;
    GLfloat exponent;

    GLfloat farPlane;
};

#endif // __POINTLIGHT_H__