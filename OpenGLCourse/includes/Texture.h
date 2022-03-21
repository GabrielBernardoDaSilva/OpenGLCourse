#ifndef TEXTURE_H
#define TEXTURE_H

#include <GL/glew.h>
#include "stb_images.h"

class Texture
{
private:
    GLuint textureID;
    int width, height, bitDepth;
    const char* fileLocation;
public:
    Texture();
    Texture(const char *fileLoc);
    ~Texture();

    void LoadTexture();
    void UseTexture();
    void ClearTexture();
};




#endif