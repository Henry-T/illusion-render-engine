
// ModelViewer.h : ModelViewer Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CModelViewerApp:
// �йش����ʵ�֣������ ModelViewer.cpp
//

class CModelViewerApp : public CWinApp
{
public:
	CModelViewerApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CModelViewerApp theApp;
