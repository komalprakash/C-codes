VERSION 5.00
Begin VB.Form Form2 
   BackColor       =   &H00404040&
   Caption         =   "Form2"
   ClientHeight    =   6345
   ClientLeft      =   225
   ClientTop       =   570
   ClientWidth     =   10860
   LinkTopic       =   "Form2"
   ScaleHeight     =   10935
   ScaleWidth      =   20250
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      BackColor       =   &H00C0C0FF&
      Caption         =   "Sign-in"
      Height          =   375
      Left            =   5280
      TabIndex        =   12
      Top             =   7080
      Width           =   1335
   End
   Begin VB.ComboBox Combo1 
      BackColor       =   &H00C0FFFF&
      Height          =   315
      ItemData        =   "Form2.frx":0000
      Left            =   8040
      List            =   "Form2.frx":0002
      TabIndex        =   11
      Text            =   "Combo1"
      Top             =   6360
      Width           =   3375
   End
   Begin VB.TextBox Text5 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   8040
      TabIndex        =   9
      Top             =   5160
      Width           =   3375
   End
   Begin VB.TextBox Text4 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   8040
      TabIndex        =   7
      Top             =   4080
      Width           =   3375
   End
   Begin VB.TextBox Text3 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   8040
      TabIndex        =   5
      Top             =   2760
      Width           =   3375
   End
   Begin VB.TextBox Text2 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   8040
      TabIndex        =   4
      Top             =   1560
      Width           =   3375
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   8040
      TabIndex        =   3
      Top             =   600
      Width           =   3375
   End
   Begin VB.Image Image2 
      Height          =   3780
      Left            =   12480
      Picture         =   "Form2.frx":0004
      Top             =   4920
      Width           =   5400
   End
   Begin VB.Image Image1 
      Height          =   495
      Left            =   9480
      Top             =   5280
      Width           =   1215
   End
   Begin VB.Label Label6 
      BackColor       =   &H00FF8080&
      Caption         =   "Current Qualification"
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
      Left            =   1560
      TabIndex        =   10
      Top             =   6240
      Width           =   2535
   End
   Begin VB.Label Label5 
      BackColor       =   &H00FF8080&
      Caption         =   "Mobile No."
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
      Left            =   1560
      TabIndex        =   8
      Top             =   5160
      Width           =   2535
   End
   Begin VB.Label Label4 
      BackColor       =   &H00FF8080&
      Caption         =   "Confirm Password"
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
      Left            =   1560
      TabIndex        =   6
      Top             =   4080
      Width           =   2535
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
      Left            =   1560
      TabIndex        =   2
      Top             =   2880
      Width           =   2535
   End
   Begin VB.Label Label2 
      BackColor       =   &H00FF8080&
      Caption         =   "E-mail"
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
      Left            =   1560
      TabIndex        =   1
      Top             =   1680
      Width           =   2535
   End
   Begin VB.Label Label1 
      BackColor       =   &H00FF8080&
      Caption         =   "Full Name"
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
      Left            =   1560
      TabIndex        =   0
      Top             =   600
      Width           =   2535
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
MsgBox "signed-in succesfully", vbOKOnly

End Sub

Private Sub Form_Load()
Combo1.AddItem ("before 10th")
Combo1.AddItem ("10th")
Combo1.AddItem ("11th")
Combo1.AddItem ("12th")
Combo1.AddItem ("graduation")
Combo1.AddItem ("professional")
End Sub

