
// MFC_TestDlg.h: 头文件
//
#include "CWIN1.h"
#include "CWIN2.h"
#include "YES_BUTTON.h"
#include "NO_BUTTON.h"

#pragma once


// CMFCTestDlg 对话框
class CMFCTestDlg : public CDialogEx
{
// 构造
public:
	CMFCTestDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_TEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
		
private:
	CWIN1 cwin1;
	CWIN2 cwin2;
	YES_BUTTON yes;
	NO_BUTTON no;
	
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
