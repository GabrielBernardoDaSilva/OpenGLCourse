#ifndef __SHADOWMAP_H__
#define __SHADOWMAP_H__

#include <GL/glew.h>

class ShadowMap
{

protected:
    GLuint FBO, shadowMap;
    GLuint shadowWidth, shadowHeight;

public:
    ShadowMap();
    ~ShadowMap();

    virtual bool Init(GLuint width, GLuint height);
    virtual void Write();
    virtual void Read(GLenum textureUnit);

    constexpr GLuint GetShadowMap() const { return shadowMap; }
    constexpr GLuint GetShadowWidth() const { return shadowWidth; }
    constexpr GLuint GetShadowHeight() const { return shadowHeight; }
};



#endif // __SHADOWMAP_H__