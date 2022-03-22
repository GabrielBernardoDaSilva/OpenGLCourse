#pragma once

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>

#include <GL/glew.h>

class Shader
{
private:
	GLuint shaderID, uniformModel, uniformProjection, uniformView, uniformEyePosition,
		uniformAmbientIntensity, uniformAmbientColour, uniformSpecularIntensity, uniformShininess;
	GLuint uniformDiffuseIntensity, uniformDirection;
	void CompileShade(const char* vertexCode, const char* fragmentCode);
	void AddShader(GLuint theProgram, const char* shaderCode, GLenum shaderType);
public:
	Shader();
	void CreateFromString(const char* vertexCode, const char* fragmentCode);
	void CreateFromFile(const char* vertexPath, const char* fragmentPath);

	std::string ReadFile(const char* fileLocation);

	GLuint GetProjectionLocation();
	GLuint GetModelLocation();
	GLuint GetViewLocation();
	GLuint GetAmbientIntensityLocation();
	GLuint GetAmbientColourLocation();
	GLuint GetDiffuseIntensityLocation();
	GLuint GetDirectionLocation();
	GLuint GetEyePositionLocation();
	GLuint GetSpecularIntensityLocation();
	GLuint GetShininessLocation();
	

	void UseShader();
	void ClearShade();


	~Shader();
};

