#pragma once
#include "afxdialogex.h"


// YES_BUTTON 对话框

class YES_BUTTON : public CDialogEx
{
	DECLARE_DYNAMIC(YES_BUTTON)

public:
	YES_BUTTON(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~YES_BUTTON();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WIN1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
