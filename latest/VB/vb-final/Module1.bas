Attribute VB_Name = "Module1"
Public Data() As String
Public Tags() As String
Public TagNo() As Long
Public TotalNoCareer As Integer
Public pow(0 To 29) As Long

Public Sub LoadPow()
  
   pow(0) = 1
   Dim i As Integer
   For i = 1 To 29
   pow(i) = pow((i - 1)) * 2
  
   Next
End Sub

Public Sub LoadData()
Dim Context As String
Open "a:\vbtext111.txt" For Input As #1
Input #1, Context

Close #1
Data() = Split(Context, ";")
TotalNoCareer = UBound(Data) / 3
End Sub

Public Sub LoadTags()

Dim temp() As String
ReDim TagNo(0 To TotalNoCareer - 1)
Tags() = Split(Mid$(Data(1), 2, Len(Data(1)) - 1), "#")
Dim i As Integer
Dim j As Integer
Dim pos As Integer

'Form1.List1.Clear

TagNo(0) = 0
For i = 0 To UBound(Tags)
Tags(i) = Trim$(Tags(i))
TagNo(0) = TagNo(0) + pow(i)
'Form1.List1.AddItem Tags(i)
Next

For i = 1 To TotalNoCareer - 1
TagNo(i) = 0
 temp() = Split(Mid$(Data(i * 3 + 1), 2, Len(Data(i * 3 + 1)) - 1), "#")
  For j = 0 To UBound(temp)
    pos = Search(temp(j))
    If pos = -1 Then
     ReDim Preserve Tags(UBound(Tags) + 1)
     Tags(UBound(Tags)) = temp(j)
     TagNo(i) = TagNo(i) + pow(UBound(Tags))
     Else
     TagNo(i) = TagNo(i) + pow(pos)
     End If
          
    
  Next
  Next
End Sub

Public Function Search(s As String) As Integer

Dim i As Integer
Dim flag As Integer
flag = 0
For i = 0 To UBound(Tags)
  If StrComp(s, Tags(i)) = 0 Then
  Search = i
  flag = 1
   Exit For
   End If
   
   Next
   
   If flag = 0 Then
   Search = -1
   End If
   
End Function
