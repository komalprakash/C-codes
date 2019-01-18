#include <stdio.h>
#include <stdlib.h>

void insrt(int[],int,int,int);
void del(int[],int,int);
int main()
{
    int n,arr[n+1];
    int i,pos,val;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
   {
   scanf("%d",&arr[i]);
   printf("array elt is %d",arr[i]);
   }
   printf("enter pos and value");
   scanf("%d",&pos,&val);
   insrt(arr,n,pos,val);
   del(arr,pos,n);
   return 0;
}
void insrt(int arr[],int n,int pos,int val)
{
    int k;
    for(k=n;k>=pos;k--)
    {
        arr[n+1]=arr[n];
        arr[pos]=val;
    }
    printf("new arr is:\n");
    for(k=0;k<=n;k++)
    {
        printf("%d",&arr[k]);
        return;
    }
}
void del(int arr[],int n,int pos)
{
    int l;
    for(l=0;l<=n;l++)
    {
        arr[l]=arr[l+1];
    }
    for(l=0;l<=n;l++)
        printf("new arr is %d",&arr[l]);
        return ;
}
