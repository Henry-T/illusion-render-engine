
// WorldEditorView.h : CWorldEditorView ��Ľӿ�
//

#pragma once


class CWorldEditorView : public CView
{
protected: // �������л�����
	CWorldEditorView();
	DECLARE_DYNCREATE(CWorldEditorView)

// ����
public:
	CWorldEditorDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWorldEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // WorldEditorView.cpp �еĵ��԰汾
inline CWorldEditorDoc* CWorldEditorView::GetDocument() const
   { return reinterpret_cast<CWorldEditorDoc*>(m_pDocument); }
#endif

