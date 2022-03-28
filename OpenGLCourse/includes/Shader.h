#pragma once

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>

#include <GL/glew.h>
#include "DirectionalLight.h"
#include "PointLight.h"
#include "CommonValues.h"
#include "SpotLight.h"

class Shader
{
private:
	int pointLightCount;
	int spotLightCount;

	GLuint shaderID, uniformModel, uniformProjection, uniformView, uniformEyePosition,
		uniformSpecularIntensity, uniformShininess, uniformDirectionalLightTransform, uniformDirectionalShadowMap,
		uniformTexture;

	struct
	{
		GLuint uniformColour;
		GLuint uniformAmbientIntensity;
		GLuint uniformDiffuseIntensity;

		GLuint uniformDirection;
	} uniformDirectionalLight;

	GLuint uniformPointLightCount;
	struct
	{
		GLuint uniformColour;
		GLuint uniformAmbientIntensity;
		GLuint uniformDiffuseIntensity;

		GLuint uniformPosition;
		GLuint uniformConstant;
		GLuint uniformLinear;
		GLuint uniformExponent;
	} uniformPointLight[MAX_POINT_LIGHTS];

	GLuint uniformSpotLightCount;

	struct
	{
		GLuint uniformColour;
		GLuint uniformAmbientIntensity;
		GLuint uniformDiffuseIntensity;

		GLuint uniformPosition;
		GLuint uniformDirection;
		GLuint uniformConstant;
		GLuint uniformLinear;

		GLuint uniformExponent;
		GLuint uniformEdge;
	} uniformSpotLight[MAX_SPOT_LIGHTS];

	void CompileShade(const char *vertexCode, const char *fragmentCode);
	void AddShader(GLuint theProgram, const char *shaderCode, GLenum shaderType);

public:
	Shader();
	void CreateFromString(const char *vertexCode, const char *fragmentCode);
	void CreateFromFile(const char *vertexPath, const char *fragmentPath);

	std::string ReadFile(const char *fileLocation);

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


	void SetDirectionalLight(DirectionalLight *dLight);
	void SetPointLights(PointLight *pLights, unsigned int lightCount);
	void SetSpotLights(SpotLight *sLights, unsigned int lightCount);
	void SetTexture(GLuint textureUnit);
	void SetDirectionalShadowMap(GLuint textureUnit);
	void SetDirectionalLightTransform(glm::mat4 *lTransform);

	void UseShader();
	void ClearShade();

	~Shader();
};
