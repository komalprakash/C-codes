VERSION 5.00
Begin VB.Form Form8 
   BackColor       =   &H80000008&
   Caption         =   "Form8"
   ClientHeight    =   5970
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   11790
   LinkTopic       =   "Form8"
   ScaleHeight     =   10935
   ScaleWidth      =   20250
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "View"
      Height          =   615
      Left            =   960
      TabIndex        =   1
      Top             =   4920
      Width           =   1455
   End
   Begin VB.OptionButton Opt 
      BackColor       =   &H0080C0FF&
      Caption         =   "      Option1"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Index           =   0
      Left            =   840
      TabIndex        =   0
      Top             =   720
      Width           =   2295
   End
   Begin VB.Image Image1 
      Height          =   11520
      Left            =   3240
      Picture         =   "Form8.frx":0000
      Top             =   -720
      Width           =   11175
   End
End
Attribute VB_Name = "Form8"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim i As Integer
For i = 0 To OptionLength
 If Opt(i).Value = True Then
 Form6.Text1.Text = Data(3 * Index(UBound(Index) - i))
 Form6.Text2.Text = Data(3 * Index(UBound(Index) - i) + 1)
 Form6.Text3.Text = Data(3 * Index(UBound(Index) - i) + 2)
 Form6.Show
 Exit For
 End If
Next
End Sub

Private Sub Form_Load()
Dim i As Integer
Dim j As Integer
j = 1
  Opt(0).Caption = Data(3 * Index(UBound(Index)))
  OptionLength = 0
  For i = UBound(Index) - 1 To 1 Step -1
   If Weight(i) = 0 Then
   
   
    Exit For
    End If
     OptionLength = OptionLength + 1
    Load Opt(j)
    With Opt(j)
      .Caption = Data(3 * Index(i))
      .Visible = True
      .Top = Opt(j - 1).Top + 550
    End With
    j = j + 1
  Next i
End Sub

