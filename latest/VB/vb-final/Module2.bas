Attribute VB_Name = "Module2"
Public Weight() As Integer
Public Index() As Integer

'Assuming Index and Weight are set properly
' Index(1)=0 Index(2)=1 Index(3)=2
' Weight also starts from 1 corresponding to career 0

Public Sub test()
ReDim Weight(5)
ReDim Index(5)
Weight(1) = 47
Index(1) = 0
Weight(2) = 46
Index(2) = 1
Weight(3) = 45
Index(3) = 2
Weight(4) = 44
Index(4) = 3
Weight(5) = 43
Index(5) = 4
End Sub

Public Function MaxHeapify(heapsize As Integer, i As Integer) As Integer
Dim largest As Integer
Dim temp As Integer
largest = i
If (2 * i) <= heapsize Then
If Weight(2 * i) > Weight(i) Then
            largest = 2 * i
            End If
            End If
            
If (2 * i + 1) <= heapsize Then
If Weight(2 * i + 1) > Weight(largest) Then
          largest = 2 * i + 1
          End If
          End If
          
If largest <> i Then
            temp = Weight(i)
            Weight(i) = Weight(largest)
            Weight(largest) = temp
            temp = Index(i)
            Index(i) = Index(largest)
            Index(largest) = temp
            temp = MaxHeapify(heapsize, largest)
            MaxHeapify = 0
        End If
                
End Function

Public Sub BuiltMaxHeap()
        Dim l As Integer
        Dim i As Integer
        Dim temp As Integer
        l = UBound(Weight)
        For i = ceiling(l, 2) To 1 Step -1
            temp = MaxHeapify(l, i)
          Next
    End Sub
    
 Public Function sort() As Integer
        Dim heapsize As Integer
        Dim temp As Integer
        heapsize = UBound(Weight)
        BuiltMaxHeap
        While heapsize > 1
        
            temp = Weight(1)
            Weight(1) = Weight(heapsize)
            Weight(heapsize) = temp
            temp = Index(1)
            Index(1) = Index(heapsize)
            Index(heapsize) = temp
            heapsize = heapsize - 1
            temp = MaxHeapify(heapsize, 1)
            Wend
                
 End Function
