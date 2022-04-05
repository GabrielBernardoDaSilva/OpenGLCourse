#ifndef __OMNISHADOWMAP_H__
#define __OMNISHADOWMAP_H__
#include "ShadowMap.h"


class OmniShadowMap : public ShadowMap
{
public:
    OmniShadowMap();
    ~OmniShadowMap();

    bool Init(unsigned int width, unsigned int height);

    void Write();

    void Read(GLenum textureUnit);

};

#endif // __OMNISHADOWMAP_H__