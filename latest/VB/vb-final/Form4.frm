VERSION 5.00
Begin VB.Form Form4 
   BackColor       =   &H00FFFFFF&
   Caption         =   "Form4"
   ClientHeight    =   6630
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   11565
   LinkTopic       =   "Form4"
   ScaleHeight     =   10935
   ScaleWidth      =   20250
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text4 
      BackColor       =   &H00FFFFFF&
      Height          =   495
      Left            =   6360
      TabIndex        =   7
      Top             =   4320
      Width           =   1695
   End
   Begin VB.TextBox Text3 
      BackColor       =   &H00FFFFFF&
      Height          =   495
      Left            =   6360
      TabIndex        =   6
      Top             =   3240
      Width           =   1695
   End
   Begin VB.TextBox Text2 
      BackColor       =   &H00FFFFFF&
      Height          =   495
      Left            =   6360
      TabIndex        =   3
      Top             =   1920
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   5040
      TabIndex        =   1
      Top             =   840
      Width           =   4455
   End
   Begin VB.Image Image1 
      Height          =   4890
      Left            =   9840
      Picture         =   "Form4.frx":0000
      Top             =   3000
      Width           =   6060
   End
   Begin VB.Label Label4 
      BackColor       =   &H00C0C000&
      Caption         =   "Confirm pasword"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   960
      TabIndex        =   5
      Top             =   4200
      Width           =   2415
   End
   Begin VB.Label Label3 
      BackColor       =   &H00C0C000&
      Caption         =   "Enter the password"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   960
      TabIndex        =   4
      Top             =   3240
      Width           =   2415
   End
   Begin VB.Label Label2 
      BackColor       =   &H00C0C000&
      Caption         =   "Enter the code sent to you"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   960
      TabIndex        =   2
      Top             =   2040
      Width           =   2415
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0C000&
      Caption         =   "Enter your e-mail id used for login"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   960
      TabIndex        =   0
      Top             =   720
      Width           =   2415
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
