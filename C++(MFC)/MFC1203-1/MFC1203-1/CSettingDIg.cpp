// CSettingDIg.cpp: 구현 파일
//

#include "pch.h"
#include "MFC1203-1.h"
#include "CSettingDIg.h"
#include "afxdialogex.h"


// CSettingDIg 대화 상자

IMPLEMENT_DYNAMIC(CSettingDIg, CDialog)

CSettingDIg::CSettingDIg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CONFIG, pParent)
	, m_dW(0)
	, m_gW(0)
	, m_bW(0)
{

}

CSettingDIg::~CSettingDIg()
{
}

void CSettingDIg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_dW);
	DDX_Text(pDX, IDC_EDIT2, m_gW);
	DDX_Text(pDX, IDC_EDIT3, m_bW);
}


BEGIN_MESSAGE_MAP(CSettingDIg, CDialog)
END_MESSAGE_MAP()


// CSettingDIg 메시지 처리기
