#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

class minheap
{
    int *harr; int capacity; int heap_size;
public:
    minheap(int capacity);
    void minheapify(int);
    int parent(int i){return (i-1)/2;}
    int left(int i){return (2*i +1;}
    int right(int i){return (2*i +2;}
    int extractmin();
    void decreasekey(int i,int new_value);
    int getmin(){return harr[0];}
    void deletekey(int i);
    void insertkey(int k);
};

minheap::minheap(int cap)
{
    heap_size=0;
    capacity=cap;
    harr=new int[cap];
}
void minheap::insertkey(int k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }
    heap_size++;
    int i=heap_size-1;
    harr[i]=k;
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(&harr[parent(i)],&harr[i]);
        i=parent(i);
    }
}


int main()
{
    minheap h(11);
}
