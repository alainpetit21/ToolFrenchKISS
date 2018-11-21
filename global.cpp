#include "stdafx.h"

DLGTEMPLATE * WINAPI DoLockDlgRes(LPCSTR lpszResName) 
{ 
	HRSRC hrsrc = FindResource(NULL, lpszResName, RT_DIALOG); 
	HGLOBAL hglb = LoadResource(AfxGetInstanceHandle(), hrsrc); 
	return (DLGTEMPLATE *) LockResource(hglb); 
} 
