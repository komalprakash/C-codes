VERSION 5.00
Begin VB.Form Form1 
   BackColor       =   &H00C0FFFF&
   Caption         =   "Form1"
   ClientHeight    =   7500
   ClientLeft      =   225
   ClientTop       =   570
   ClientWidth     =   10905
   LinkTopic       =   "Form1"
   ScaleHeight     =   7500
   ScaleWidth      =   10905
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Don't know where to start?"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   12240
      MaskColor       =   &H00C0FFFF&
      TabIndex        =   7
      Top             =   8280
      Width           =   3975
   End
   Begin VB.CommandButton Command1 
      BackColor       =   &H00C0FFFF&
      Caption         =   "View All Careers"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   12960
      MaskColor       =   &H00C0FFFF&
      TabIndex        =   6
      Top             =   9240
      Width           =   2775
   End
   Begin VB.Image Image4 
      Height          =   5085
      Left            =   120
      Picture         =   "Form1.frx":0000
      Top             =   4800
      Width           =   8130
   End
   Begin VB.Image Image5 
      Height          =   735
      Left            =   1440
      Top             =   8280
      Width           =   1935
   End
   Begin VB.Image Image3 
      Height          =   4740
      Left            =   9000
      Picture         =   "Form1.frx":86C16
      Top             =   3120
      Width           =   10800
   End
   Begin VB.Image Image1 
      Height          =   495
      Index           =   1
      Left            =   0
      Top             =   0
      Width           =   1215
   End
   Begin VB.Image Image2 
      Height          =   495
      Left            =   0
      Top             =   0
      Width           =   1215
   End
   Begin VB.Label Label8 
      BackColor       =   &H00C0FFFF&
      Caption         =   ".com"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   18
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00C0C000&
      Height          =   495
      Left            =   7320
      TabIndex        =   9
      Top             =   720
      Width           =   975
   End
   Begin VB.Label Label7 
      BackColor       =   &H00C0FFFF&
      Caption         =   "COUNSELLOR"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   30
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00C0C000&
      Height          =   855
      Left            =   3000
      TabIndex        =   8
      Top             =   360
      Width           =   4455
   End
   Begin VB.Label Label6 
      BackColor       =   &H00C0C000&
      Caption         =   "    Log-in"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   13680
      TabIndex        =   5
      Top             =   1920
      Width           =   1575
   End
   Begin VB.Label Label5 
      BackColor       =   &H000080FF&
      Caption         =   "     Sign up"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   10080
      TabIndex        =   4
      Top             =   1920
      Width           =   1695
   End
   Begin VB.Label Label4 
      BackColor       =   &H00C0C000&
      Caption         =   "exsisting user?"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   13680
      TabIndex        =   3
      Top             =   1320
      Width           =   1095
   End
   Begin VB.Label Label3 
      BackColor       =   &H000080FF&
      Caption         =   "new to career counsellor?"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   10080
      TabIndex        =   2
      Top             =   1320
      Width           =   1335
   End
   Begin VB.Label Label2 
      BackColor       =   &H00C0C000&
      Caption         =   "India's  largest  career  counselling  comapny"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00000000&
      Height          =   375
      Left            =   600
      TabIndex        =   1
      Top             =   1800
      Width           =   6375
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      Caption         =   "CAREER "
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   30
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   240
      TabIndex        =   0
      Top             =   360
      Width           =   2655
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim i As Integer
For i = 0 To TotalNoCareer - 1
 Form5.Text1.Text = Form5.Text1.Text & Str(i) & "." & Data(i * 3) & vbNewLine
Form5.Show
Next


End Sub

Private Sub Command2_Click()
Form7.Show
End Sub

Private Sub Form_Load()
LoadData
LoadPow
LoadTags

End Sub

Private Sub Label5_Click()
Form2.Show
End Sub

Private Sub Label6_Click()
Form3.Show

End Sub

