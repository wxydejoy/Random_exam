#pragma once


// English 对话框

class English : public CDialogEx
{
	DECLARE_DYNAMIC(English)

public:
	English(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~English();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_English };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
