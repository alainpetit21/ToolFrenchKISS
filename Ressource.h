#ifndef _RESSOURCE_H_
#define _RESSOURCE_H_

#include <vector>
#include <string>
#include "Ressource.h"

using namespace std;

class CRessource  
{
public:
	CRessource(const char* p_szName="");
	virtual ~CRessource();

	CRessource*			m_parent;
	vector<CRessource*>	m_children;
	CString				m_strName;
	int					m_idPaneInput;
	int					m_idPaneOutput;
	int					m_idPanePreview;
};

#endif // _RESSOURCE_H_
