#ifndef __OMNISHADOWMAP_H__
#define __OMNISHADOWMAP_H__
#include "ShadowMap.h"


class OmniShadowMap :
	public ShadowMap
{
public:
	OmniShadowMap();

	bool Init(unsigned int width, unsigned int height);

	void Write();

	void Read(GLenum TextureUnit);

	~OmniShadowMap();
};



#endif // __OMNISHADOWMAP_H__