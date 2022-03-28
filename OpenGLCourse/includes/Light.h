#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "ShadowMap.h"

class Light
{
protected:
    glm::vec3 colour;

    GLfloat ambientIntensity;
    GLfloat diffuseIntensity;

    glm::mat4 lightProj;

    ShadowMap* shadowMap;

public:
    Light();
    Light(
        GLfloat shadowWidth, GLfloat shadowHeight,
        GLfloat red, GLfloat green, GLfloat blue, 
        GLfloat aIntensity, GLfloat dIntensity);
    ~Light();


    ShadowMap* GetShadowMap() { return shadowMap; }

    
};

#endif // __LIGHT_H__