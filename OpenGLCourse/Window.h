#pragma once

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
private:
	GLFWwindow* mainWindow{nullptr};
	GLint width, height;
	GLint bufferWidth = 0, bufferHeight = 0;
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	int Initialise();

	GLint GetBufferWidth() { return bufferWidth; }
	GLint GetBufferHeight() { return bufferHeight; }
	bool GetShouldClose() { return glfwWindowShouldClose(mainWindow); }
	void SwapBuffers() { glfwSwapBuffers(mainWindow); };
	~Window();
};

