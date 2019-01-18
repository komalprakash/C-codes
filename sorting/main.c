#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int,int,int);
void mergesort(int arr[],int,int);
int main()
{
    int arr[10],n,i;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array elts:\n");
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    mergesort(arr,0,n-1);
    printf("the sorted array is\n:");
    for(i=0;i<n;i++)

        printf("%d\t",arr[i]);
}

void merge(int arr[],int beg,int mid,int end)
{
    int i=beg, j=mid+1, index=beg, temp[10],k;
    while((i<=mid)&&(j<=end))
    {
        if (arr[i]<arr[j])
        {
            temp[index]=arr[i];
            i++;
        }
        else
        {
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else
    {
            while(i<=mid)
            {
             temp[index]=arr[i];
             i++;
             index++;
            }
        }
        for(k=beg;k<index;k++)
            arr[k]=temp[k];
}


void mergesort(int arr[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
