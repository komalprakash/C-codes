VERSION 5.00
Begin VB.Form Form5 
   BackColor       =   &H00C0E0FF&
   Caption         =   "Form5"
   ClientHeight    =   6405
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   8205
   LinkTopic       =   "Form5"
   ScaleHeight     =   6405
   ScaleWidth      =   8205
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "View"
      Height          =   615
      Left            =   2040
      TabIndex        =   2
      Top             =   4560
      Width           =   1335
   End
   Begin VB.TextBox Text2 
      BackColor       =   &H80000004&
      Height          =   495
      Left            =   4920
      TabIndex        =   1
      Top             =   3480
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   2415
      Left            =   1920
      MultiLine       =   -1  'True
      TabIndex        =   0
      Top             =   480
      Width           =   3855
   End
   Begin VB.Image Image1 
      Height          =   6360
      Left            =   7800
      Picture         =   "Form5.frx":0000
      Top             =   1320
      Width           =   9600
   End
   Begin VB.Label Label1 
      Caption         =   "Type The  Career No to view"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   1920
      TabIndex        =   3
      Top             =   3480
      Width           =   2535
   End
End
Attribute VB_Name = "Form5"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim choice As Integer
choice = CInt(Text2.Text)
Form6.Text1.Text = Data(choice * 3)
Form6.Text2.Text = Data(choice * 3 + 1)
Form6.Text3.Text = Data(choice * 3 + 2)
Form6.Show




End Sub

