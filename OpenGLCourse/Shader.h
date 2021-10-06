#pragma once

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>

#include <GL/glew.h>

class Shader
{
private:
	GLuint shaderID, uniformModel, uniformProjection;
	void CompileShade(const char* vertexCode, const char* fragmentCode);
	void AddShader(GLuint theProgram, const char* shaderCode, GLenum shaderType);
public:
	Shader();
	void CreateFromString(const char* vertexCode, const char* fragmentCode);
	void CreateFromFile(const char* vertexPath, const char* fragmentPath);

	std::string ReadFile(const char* fileLocation);

	GLuint GetProjectionLocation();
	GLuint GetModelLocation();

	void UseShader();
	void ClearShade();


	~Shader();
};

