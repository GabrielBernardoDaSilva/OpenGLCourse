#ifndef __MATERIAL_H__
#define __MATERIAL_H__

#include <GL/glew.h>


class Material
{
public:
	Material();
	Material(GLfloat sIntensity, GLfloat shine);

	void UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation);

	~Material();

private: 
	GLfloat specularIntensity;
	GLfloat shininess;
};



#endif // __MATERIAL_H__