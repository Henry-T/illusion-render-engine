
// ModelViewerView.h : CModelViewerView ��Ľӿ�
//

#pragma once


class CModelViewerView : public CView
{
protected: // �������л�����
	CModelViewerView();
	DECLARE_DYNCREATE(CModelViewerView)

// ����
public:
	CModelViewerDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CModelViewerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ModelViewerView.cpp �еĵ��԰汾
inline CModelViewerDoc* CModelViewerView::GetDocument() const
   { return reinterpret_cast<CModelViewerDoc*>(m_pDocument); }
#endif

