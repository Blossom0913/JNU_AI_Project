typedef BOOL bool;
typedef TRUE true;
typedef FALSE false;
// 创建一个模式对话框
void CTest::OnTest(){
	CMyDialog dlg;
	dlg.DoModal();
}

//  创建一个无模式对话框

void CTestView::OnTest(){

	static BOOL bFlag = FALSE;
	if(FALSE == bFlag)
	{
		dlg.Create(IDD_DIALOG,this);
		dlg.ShowWindow(SW_SHOW);
		bFlag = TRUE;
	}
	else
	{
		dlg.DestroyWindow();
		bFlag = FALSE;
	}
}