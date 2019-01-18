Attribute VB_Name = "Module3"
Public SelectedValue As Long
Public OptionLength As Integer

Public Function ceiling(a As Integer, b As Integer) As Integer
If (a Mod b) > 0 Then
 ceiling = a \ b + 1
 Else
 ceiling = a \ b
 End If
 
End Function

Public Function CountBits(n As Long) As Integer
Dim temp As Long
Dim count As Integer
temp = n
count = 0
While temp > 0
 If (temp Mod 2) = 1 Then
 count = count + 1
 End If
 temp = temp \ 2
 Wend
 CountBits = count

End Function


