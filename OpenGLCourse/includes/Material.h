#ifndef __MATERIAL_H__
#define __MATERIAL_H__

#include <GL/glew.h>


class Material
{
private:
    GLfloat specularIntensity;
    GLfloat shininess;
    

public:
    Material();
    Material(GLfloat specularIntensity, GLfloat shininess);
    ~Material();

    void UseMaterials(GLuint specularIntensityLocation, GLuint shininessLocation);
    
};


#endif // __MATERIAL_H__