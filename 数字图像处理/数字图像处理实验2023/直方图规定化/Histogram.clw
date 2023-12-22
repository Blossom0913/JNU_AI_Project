; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CHistogramView
LastTemplate=CStatusBarCtrl
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Histogram.h"
LastPage=0

ClassCount=6
Class1=CHistogramApp
Class2=CHistogramDoc
Class3=CHistogramView
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CCurrentColor
Resource2=IDD_ABOUTBOX

[CLS:CHistogramApp]
Type=0
HeaderFile=Histogram.h
ImplementationFile=Histogram.cpp
Filter=N

[CLS:CHistogramDoc]
Type=0
HeaderFile=HistogramDoc.h
ImplementationFile=HistogramDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=CHistogramDoc

[CLS:CHistogramView]
Type=0
HeaderFile=HistogramView.h
ImplementationFile=HistogramView.cpp
Filter=C
BaseClass=CScrollView
VirtualFilter=VWC
LastObject=CHistogramView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_EQUA




[CLS:CAboutDlg]
Type=0
HeaderFile=Histogram.cpp
ImplementationFile=Histogram.cpp
Filter=D

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
Command9=ID_EQUA
Command10=ID_DEST
Command11=ID_SPEC
Command12=ID_GREY
Command13=ID_Furior
Command14=ID_BUTTON32777
CommandCount=14

[CLS:CCurrentColor]
Type=0
HeaderFile=CurrentColor.h
ImplementationFile=CurrentColor.cpp
BaseClass=CStatusBarCtrl
Filter=W

