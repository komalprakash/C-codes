VERSION 5.00
Begin VB.Form Form3 
   BackColor       =   &H00C0FFFF&
   Caption         =   "Form3"
   ClientHeight    =   6705
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   12810
   LinkTopic       =   "Form3"
   ScaleHeight     =   6705
   ScaleWidth      =   12810
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "LOG-IN"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   6720
      TabIndex        =   7
      Top             =   4800
      Width           =   1815
   End
   Begin VB.CheckBox Check2 
      BackColor       =   &H00C0C0C0&
      Caption         =   "Forgot pasword?"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   10680
      TabIndex        =   6
      Top             =   2880
      Width           =   1695
   End
   Begin VB.CheckBox Check1 
      BackColor       =   &H00C0C0C0&
      Caption         =   "Remember password?"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   8400
      TabIndex        =   5
      Top             =   3840
      Width           =   2655
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   8160
      TabIndex        =   4
      Top             =   2880
      Width           =   2175
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   8160
      TabIndex        =   3
      Top             =   1920
      Width           =   2175
   End
   Begin VB.Image Image1 
      Height          =   3375
      Left            =   3000
      Picture         =   "Form3.frx":0000
      Top             =   6480
      Width           =   11400
   End
   Begin VB.Label Label3 
      BackColor       =   &H00FF8080&
      Caption         =   "Password"
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
      Left            =   4680
      TabIndex        =   2
      Top             =   2880
      Width           =   2055
   End
   Begin VB.Label Label2 
      BackColor       =   &H00FF8080&
      Caption         =   "Name"
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
      Left            =   4680
      TabIndex        =   1
      Top             =   1800
      Width           =   2055
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0E0FF&
      Caption         =   "Welcome back! "
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   17.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   615
      Left            =   6960
      TabIndex        =   0
      Top             =   240
      Width           =   2895
   End
   Begin VB.Shape Shape1 
      BackColor       =   &H00FFC0FF&
      Height          =   4935
      Left            =   3840
      Top             =   1080
      Width           =   8895
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check2_Click()
Form4.Show

End Sub

