#ifndef TEXTURE_H
#define TEXTURE_H

#include <GL/glew.h>
#include "stb_images.h"

class Texture
{
private:
    GLuint textureID;
    int width, height, bitDepth;
    char* fileLocation;
public:
    Texture();
    Texture(char* fileLoc);
    ~Texture();

    void LoadTexture();
    void UseTexture();
    void ClearTexture();
};




#endif