
// WorldEditor.h : WorldEditor Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWorldEditorApp:
// �йش����ʵ�֣������ WorldEditor.cpp
//

class CWorldEditorApp : public CWinApp
{
public:
	CWorldEditorApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWorldEditorApp theApp;