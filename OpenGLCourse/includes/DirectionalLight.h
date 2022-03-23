#ifndef __DIRECTIONALLIGHT_H__
#define __DIRECTIONALLIGHT_H__

#include "Light.h"

class DirectionalLight: public Light
{
private:
    glm::vec3 direction;
public:
    DirectionalLight();

   	DirectionalLight(GLfloat red, GLfloat green, GLfloat blue, 
					GLfloat aIntensity, GLfloat dIntensity,
					GLfloat xDir, GLfloat yDir, GLfloat zDir);
   

    void UseLight(GLfloat ambientIntensityLocation, 
                          GLfloat ambientColourLocation, 
                          GLfloat diffuseIntensityLocation, 
                          GLfloat directionLocation);
    ~DirectionalLight();
};




#endif // __DIRECTIONALLIGHT_H__