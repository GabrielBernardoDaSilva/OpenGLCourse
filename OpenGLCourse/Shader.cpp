#include "Shader.h"

Shader::Shader()
{
	shaderID = uniformModel = uniformProjection = uniformView =  0;
}

void Shader::CreateFromString(const char* vertexCode, const char* fragmentCode)
{
	CompileShade(vertexCode, fragmentCode);
}

void Shader::CreateFromFile(const char* vertexPath, const char* fragmentPath)
{
	std::string vertexString = ReadFile(vertexPath);
	std::string fragmentString = ReadFile(fragmentPath);
	const char* vertexCode = vertexString.c_str();
	const char* fragmentCode = fragmentString.c_str();

	CompileShade(vertexCode, fragmentCode);

}

std::string Shader::ReadFile(const char* fileLocation)
{
	std::string content;

	std::ifstream fileStream(fileLocation, std::ios::in);
	if (!fileStream.is_open()) {
		std::cout << "Failed to read " << fileLocation << "! File doesnt exist!";
	}
	std::string line = "";
	while (!fileStream.eof())
	{
		std::getline(fileStream, line);
		content.append(line + "\n");
	}
	fileStream.close();

	return content;
}

void Shader::CompileShade(const char* vertexCode, const char* fragmentCode)
{

	//create global id from graphic card
	shaderID = glCreateProgram();
	if (!shaderID)
	{
		std::cout << "Error creating shader programming \n";
		return;
	}
	//add sahder to this address id vertex and fragement
	AddShader(shaderID, vertexCode, GL_VERTEX_SHADER);
	AddShader(shaderID, fragmentCode, GL_FRAGMENT_SHADER);

	//check the result
	GLint result = 0;
	GLchar eLog[1024]{ 0 };
	//link to program
	glLinkProgram(shaderID);
	//check the status if everything correct
	glGetProgramiv(shaderID, GL_LINK_STATUS, &result);
	if (!result)
	{
		//get the log generated in graphic card
		glGetProgramInfoLog(shaderID, sizeof(eLog), nullptr, eLog);
		std::cout << "Error link program: " << eLog << std::endl;
		return;
	}
	//validate the program
	glValidateProgram(shaderID);
	//check  if the program its alright
	glGetProgramiv(shaderID, GL_VALIDATE_STATUS, &result);
	if (!result)
	{
		//get the log of the program error
		glGetProgramInfoLog(shaderID, sizeof(eLog), nullptr, eLog);
		std::cout << "Error validating program: " << eLog << std::endl;
		return;
	}
	//get the reference in the sahder of  xMove
	uniformProjection = glGetUniformLocation(shaderID, "projection");
	uniformModel = glGetUniformLocation(shaderID, "model");
	uniformView = glGetUniformLocation(shaderID, "view");
	
}

void Shader::AddShader(GLuint theProgram, const char* shaderCode, GLenum shaderType)
{
	//get the address id in the graphic card
	GLuint theShader = glCreateShader(shaderType);
	//set the point of const char* to the first GLChar its only reference of shader code
	const GLchar* theCode[1];
	theCode[0] = shaderCode;
	//get the lenght of shaderCode
	GLint codeLenght[1];
	codeLenght[0] = strlen(shaderCode);
	//set the shader code to the address id of the shader in graphic card, set how many code will too
	glShaderSource(theShader, 1, theCode, codeLenght);
	//compile the shader in the graphic card
	glCompileShader(theShader);


	//check for errors
	GLint result = 0;
	GLchar eLog[1024]{ 0 };
	glGetShaderiv(theShader, GL_COMPILE_STATUS, &result);
	if (!result)
	{
		glGetShaderInfoLog(theShader, sizeof(eLog), nullptr, eLog);
		std::cout << "Error compiling the shader: " << shaderType << " and the error log is: " << eLog << std::endl;
		return;
	}
	//attach the shader to the program  based on his Id
	glAttachShader(theProgram, theShader);
}



GLuint Shader::GetProjectionLocation()
{
	return uniformProjection;
}

GLuint Shader::GetModelLocation()
{
	return uniformModel;
}

GLuint Shader::GetViewLocation()
{
	return uniformView;
}

void Shader::UseShader()
{
	if (shaderID != 0)
		glUseProgram(shaderID);
}

void Shader::ClearShade()
{
	if (shaderID != 0) {
		glDeleteProgram(shaderID);
		shaderID = 0;
	}
	uniformModel = 0;
	uniformProjection = 0;
}

Shader::~Shader()
{
}
