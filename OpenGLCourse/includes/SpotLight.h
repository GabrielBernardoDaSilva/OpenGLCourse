#ifndef __SPOTLIGHT_H__
#define __SPOTLIGHT_H__

#include "PointLight.h"

class SpotLight : public PointLight
{
private:
    glm::vec3 direction;
    GLfloat edge, procEdge;

public:
    SpotLight();
    SpotLight(
        GLuint shadowWidth, GLuint shadowHeight,
        GLfloat near, GLfloat far, GLfloat red, GLfloat green, GLfloat blue,
        GLfloat aIntensity, GLfloat dIntensity,
        GLfloat xPos, GLfloat yPos, GLfloat zPos,
        GLfloat xDir, GLfloat yDir, GLfloat zDir,
        GLfloat con, GLfloat lin, GLfloat exp, GLfloat edge);
    ~SpotLight();

    void UseLight(GLuint ambientIntensityLocation, GLuint ambientColourLocation,
                  GLuint diffuseIntensityLocation, GLuint positionLocation, GLuint directionLocation,
                  GLuint constantLocation, GLuint linearLocation, GLuint exponentLocation,
                  GLuint edgeLocation);

    void SetFlash(glm::vec3 pos, glm::vec3 dir);
};

#endif // __SPOTLIGHT_H__