#include <stdio.h>
#include <stdlib.h>

interpolation(int arr[],int low,int high,int num)
{
    int mid;
    while(low<high)
    {
        mid=(low+(high-low)*(num-arr[low]))/(arr[high]-arr[low]);
        if(arr[mid]=num)
            return mid;
        else if(arr[mid]>num)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main()
{

    int arr[10],i,n,num,pos;
    printf("enter no of elts");
    scanf("%d",&n);
    printf("enter array elts:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("enter the no whch u wnt to search");
        scanf("%d",&num);

   pos=interpolation(arr,0,n-1,num);
   if(pos==-1)
    printf("the val not found");
   else
    printf("the val found at %d",pos);



    return 0;

}

