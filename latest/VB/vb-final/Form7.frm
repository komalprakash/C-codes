VERSION 5.00
Begin VB.Form Form7 
   BackColor       =   &H0080FFFF&
   Caption         =   "Form7"
   ClientHeight    =   5010
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   12120
   LinkTopic       =   "Form7"
   ScaleHeight     =   10935
   ScaleWidth      =   20250
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Proceed"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   1920
      TabIndex        =   1
      Top             =   5880
      Width           =   2175
   End
   Begin VB.CheckBox Cbox 
      Alignment       =   1  'Right Justify
      BackColor       =   &H00C0C000&
      Caption         =   "Check1"
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
      Index           =   0
      Left            =   1800
      TabIndex        =   0
      Top             =   1680
      Width           =   2295
   End
   Begin VB.Image Image1 
      Height          =   5085
      Left            =   7080
      Picture         =   "Form7.frx":0000
      Top             =   1080
      Width           =   9030
   End
End
Attribute VB_Name = "Form7"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
SelectedValue = 0
Dim i As Integer
For i = 0 To UBound(Tags)
 If Cbox(i) = vbChecked Then
 SelectedValue = SelectedValue + pow(i)
 End If
 Next
  ReDim Weight(UBound(TagNo) + 1)
  ReDim Index(UBound(TagNo) + 1)
  
  For i = 0 To UBound(TagNo)
  Weight(i + 1) = CountBits((SelectedValue And TagNo(i)))
  Index(i + 1) = i
  Next
  
   
  sort
  
 If Weight(UBound(Weight)) = 0 Then
 MsgBox ("No Match Found")
 Else
  Form8.Show
 End If
End Sub

Public Sub Form_Load()
Dim i As Integer
Cbox(0).Caption = Tags(0)
  
  For i = 1 To UBound(Tags)
    Load Cbox(i)
    With Cbox(i)
      .Caption = Tags(i)
      .Visible = True
      .Top = Cbox(i - 1).Top + 550
    End With
  Next i
End Sub

