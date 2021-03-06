#pragma once
#include "DllCommon.h"

// CClientOperationSubWindow dialog

class CClientOperationSubWindow : public CDialogEx
{
	DECLARE_DYNAMIC(CClientOperationSubWindow)

public:
	CClientOperationSubWindow(CWnd* pParent = NULL);   // standard constructor
	virtual ~CClientOperationSubWindow();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_DLL_SCREEN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
  SOCKET m_hSocket;
  pfnSendMessageOut m_pfnSMO;
  int m_nScreenWidth;
  int m_nScreenHeight;
  bool m_bIsMonitoring;

  afx_msg void OnBnClickedButtonClientOperationSubWindowScreenStart();
  virtual BOOL OnInitDialog();
  afx_msg void OnBnClickedButtonClientOperationSubWindowScreenStop();
};
