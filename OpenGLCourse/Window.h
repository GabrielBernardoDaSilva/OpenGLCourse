#pragma once

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
private:
	GLFWwindow* mainWindow{ nullptr };
	GLint width, height;
	GLint bufferWidth = 0, bufferHeight = 0;
	GLfloat lastX = 0.0f;
	GLfloat lastY = 0.0f;
	GLfloat xChange = 0.0f;
	GLfloat yChange = 0.0f;

	bool mouseFirstMoved = false;
	bool keys[1024];

	void CreateCallbacks();
	static void HandleKeys(GLFWwindow* window, int key, int code, int action, int mode);
	static void HandleMouse(GLFWwindow* window, double xPos, double yPos);
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	int Initialise();

	GLint GetBufferWidth() { return bufferWidth; }
	GLint GetBufferHeight() { return bufferHeight; }
	GLfloat GetXChanges();
	GLfloat GetYChanges();
	bool GetShouldClose() { return glfwWindowShouldClose(mainWindow); }
	bool* GetKeys() { return keys; }
	void SwapBuffers() { glfwSwapBuffers(mainWindow); };
	~Window();
};

