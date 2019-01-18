#include <stdio.h>
#include <stdlib.h>


int main()
{

    int arr[10],i,n,num,beg,end,mid,found=0;
    printf("enter no of elts");
    scanf("%d",&n);
    printf("enter array elts:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("enter the no whch u wnt to search");
        scanf("%d",&num);

    beg=0,end=n-1;

    while(beg<end)
    {
     mid=(beg+end)/2;

    if(arr[mid]==num)
    {
        printf("num is present at %d",mid );
        found=1;
        break;
    }
     else if(arr[mid]>num)
      end=mid-1;
     else
      beg=mid+1;
    }
    if((beg>end)&&(found==0))
    {
        printf("\nvalue not found");
    }
    return 0;

}
