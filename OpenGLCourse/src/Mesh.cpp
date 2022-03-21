#include "Mesh.h"

Mesh::Mesh()
{
	VBO = VAO = IBO = indexCount = 0;
}

void Mesh::CreateMesh(GLfloat* vertices, unsigned int* indices, unsigned int numOfVertices, unsigned int numOfIndices)
{
	//set index
	indexCount = numOfIndices;

	glGenVertexArrays(1, &VAO);
	//bind vertex
	glBindVertexArray(VAO);
	//get the id from the graphiv cards to IBO
	glGenBuffers(1, &IBO);
	//bind the ibo to be type of GL_ELEMENT_ARRAY_BUFFER
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IBO);
	//set the value of IBO to be relative to the array of indices 
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices[0]) * numOfIndices, indices, GL_STATIC_DRAW);

	glGenBuffers(1, &VBO);
	//bind buffer
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//gl draw
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices[0]) * numOfVertices, vertices, GL_STATIC_DRAW);
	//set where it will start and how will read the data
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	//tell to start from zero, this zero is related to first zero above
	glEnableVertexAttribArray(0);
	//unbind buffer
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	//unbind buffer of IBO
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	//unbinde vertex
	glBindVertexArray(0);
}

void Mesh::RenderMesh()
{
	if (VAO != 0 && IBO != 0 && indexCount != 0) {
		glBindVertexArray(VAO);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IBO);

		glDrawElements(GL_TRIANGLES, indexCount, GL_UNSIGNED_INT, 0);

		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
		glBindVertexArray(0);
	}
}

void Mesh::ClearMesh()
{
	if (IBO != 0)
	{
		glDeleteBuffers(1, &IBO);
		IBO = 0;
	}
	if (VBO != 0)
	{
		glDeleteBuffers(1, &VBO);
		VBO = 0;
	}
	if (VAO != 0)
	{
		glDeleteVertexArrays(1, &VAO);
		VAO = 0;
	}

	indexCount = 0;
}

Mesh::~Mesh()
{
	ClearMesh();
}