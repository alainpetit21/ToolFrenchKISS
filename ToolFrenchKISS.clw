; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CToolFrenchKISSView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ToolFrenchKISS.h"
LastPage=0

ClassCount=6
Class1=CToolFrenchKISSApp
Class2=CToolFrenchKISSDoc
Class3=CToolFrenchKISSView
Class4=CMainFrame

ResourceCount=21
Resource1=IDD_RES_IMAGE_INPUT
Resource2=IDD_RES_IMAGE_OUTPUT
Resource3=IDD_RES_SOUND_OUTPUT
Resource4=IDD_RES_SOUND_INPUT
Resource5=IDD_RES_IMAGE_PREVIEW
Resource6=IDD_SOUND_OUTPUT
Resource7=IDD_ABOUTBOX
Resource8=IDD_IMAGE_INPUT
Class5=CLeftView
Class6=CAboutDlg
Resource9=IDD_RES_SOUND_PREVIEW
Resource10=IDD_TOOLFRENCHKISS_FORM
Resource11=IDR_MAINFRAME
Resource12=IDD_IMAGE_OUTPUT
Resource13=IDD_IMAGE_PREVIEW
Resource14=IDD_SOUND_PREVIEW
Resource15=IDD_SOUND_INPUT
Resource16=IDD_IMAGE_PREVIEW (English (U.S.))
Resource17=IDD_IMAGE_INPUT (English (U.S.))
Resource18=IDD_IMAGE_OUTPUT (English (U.S.))
Resource19=IDD_SOUND_OUTPUT (English (U.S.))
Resource20=IDD_SOUND_PREVIEW (English (U.S.))
Resource21=IDD_SOUND_INPUT (English (U.S.))

[CLS:CToolFrenchKISSApp]
Type=0
HeaderFile=ToolFrenchKISS.h
ImplementationFile=ToolFrenchKISS.cpp
Filter=N

[CLS:CToolFrenchKISSDoc]
Type=0
HeaderFile=ToolFrenchKISSDoc.h
ImplementationFile=ToolFrenchKISSDoc.cpp
Filter=N

[CLS:CToolFrenchKISSView]
Type=0
HeaderFile=ToolFrenchKISSView.h
ImplementationFile=ToolFrenchKISSView.cpp
Filter=D
BaseClass=CFormView
VirtualFilter=VWC
LastObject=IDC_TAB1


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T



[CLS:CLeftView]
Type=0
HeaderFile=LeftView.h
ImplementationFile=LeftView.cpp
Filter=T
BaseClass=CTreeView
VirtualFilter=VWC

[CLS:CAboutDlg]
Type=0
HeaderFile=ToolFrenchKISS.cpp
ImplementationFile=ToolFrenchKISS.cpp
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

[DLG:IDD_TOOLFRENCHKISS_FORM]
Type=1
Class=CToolFrenchKISSView
ControlCount=0

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_RES_IMAGE_INPUT]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_RES_IMAGE_OUTPUT]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_RES_SOUND_INPUT]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_RES_SOUND_OUTPUT]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_RES_IMAGE_PREVIEW]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_RES_SOUND_PREVIEW]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,static,1342308352

[DLG:IDD_IMAGE_INPUT]
Type=1
Class=?
ControlCount=3
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_STATIC,static,1342308352
Control3=IDC_BUTTON1,button,1342242816

[DLG:IDD_IMAGE_OUTPUT]
Type=1
Class=?
ControlCount=6
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT3,edit,1350631552

[DLG:IDD_IMAGE_PREVIEW]
Type=1
Class=?
ControlCount=0

[DLG:IDD_SOUND_INPUT]
Type=1
Class=?
ControlCount=1
Control1=IDC_STATIC,button,1342177287

[DLG:IDD_SOUND_OUTPUT]
Type=1
Class=?
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

[DLG:IDD_SOUND_PREVIEW]
Type=1
Class=?
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

[DLG:IDD_IMAGE_PREVIEW (English (U.S.))]
Type=1
ControlCount=0

[DLG:IDD_IMAGE_INPUT (English (U.S.))]
Type=1
ControlCount=3
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_STATIC,static,1342308352
Control3=IDC_BUTTON1,button,1342242816

[DLG:IDD_IMAGE_OUTPUT (English (U.S.))]
Type=1
ControlCount=6
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT3,edit,1350631552

[DLG:IDD_SOUND_OUTPUT (English (U.S.))]
Type=1
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

[DLG:IDD_SOUND_PREVIEW (English (U.S.))]
Type=1
ControlCount=1
Control1=IDC_BUTTON1,button,1342242816

[DLG:IDD_SOUND_INPUT (English (U.S.))]
Type=1
ControlCount=1
Control1=IDC_STATIC,button,1342177287

