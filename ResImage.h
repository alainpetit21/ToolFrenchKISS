#ifndef _RESSOURCE_IMAGE_H_
#define _RESSOURCE_IMAGE_H_

#include "Ressource.h"

class CResImage : public CRessource  
{
public:
	CResImage(const char* p_szName="");
	virtual ~CResImage();

};

#endif // _RESSOURCE_IMAGE_H_
