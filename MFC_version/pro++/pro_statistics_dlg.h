#pragma once

#include "resource.h"
#include "pro_statistics_serv.h"

// CProStatisticsDlg 对话框

class CProStatisticsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CProStatisticsDlg)

public:
	CProStatisticsDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CProStatisticsDlg();

	// 对话框数据
	enum { IDD = IDD_PRO_STATISTICS_DIALOG};

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

private:
	void statitics();
	CEdit m_pro_statistics_edit;
public:
	afx_msg void on_refresh_btn_clicked();
};
