; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCxt913View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "cxt913.h"
LastPage=0

ClassCount=6
Class1=CCxt913App
Class2=CCxt913Doc
Class3=CCxt913View
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_ABOUTBOX
Class5=CAboutDlg
Resource2=IDR_MAINFRAME
Class6=CHistogramDlg
Resource3=IDD_DIALOG1

[CLS:CCxt913App]
Type=0
HeaderFile=cxt913.h
ImplementationFile=cxt913.cpp
Filter=N

[CLS:CCxt913Doc]
Type=0
HeaderFile=cxt913Doc.h
ImplementationFile=cxt913Doc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=CCxt913Doc

[CLS:CCxt913View]
Type=0
HeaderFile=cxt913View.h
ImplementationFile=cxt913View.cpp
Filter=C
BaseClass=CScrollView
VirtualFilter=VWC
LastObject=ID_FFT_FILTER_IDEA


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=cxt913.cpp
ImplementationFile=cxt913.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_GRAY
Command10=ID_HISTOGRAM
Command11=ID_LINETRANS
Command12=ID_EQUALIZE
Command13=ID_FT
Command14=ID_IFT
Command15=ID_FFT
Command16=ID_IFFT
Command17=ID_AVG_SMOOTH
Command18=ID_MID_SMOOTH
Command19=ID_GRAD_SHARP
Command20=ID_RAPLAS_SHARP
Command21=ID_FFT_FILTER_IDEA
CommandCount=21

[DLG:IDD_DIALOG1]
Type=1
Class=CHistogramDlg
ControlCount=0

[CLS:CHistogramDlg]
Type=0
HeaderFile=HistogramDlg.h
ImplementationFile=HistogramDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CHistogramDlg
VirtualFilter=dWC

