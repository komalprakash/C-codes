#include <stdio.h>
#include <stdlib.h>
void mergesort(int a[],int l,int h);
void merge(int a[],int l,int h,int n);
int main()
{

   int a[10],n,i;
   printf("enter n");
   scanf("%d",&n);
   printf("\nenter elts\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   mergesort(a,0,n-1);
   for(i=0;i<n;i++)
   {
       printf("%d",a[i]);
   }


    return 0;
}

void mergesort(int a[],int l,int h)
{
    if(l<h)

    {


    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,h);
}
}
void merge(int a[],int l,int h)
{
    int mid=(l+h)/2;
    int lt[10],rt[10],i,k,j;
    int n1, n2;
    n1= mid-l +1;
    n2=h-mid;
    for(i=0;i<n1;i++)
    {
        lt[i]=a[l+i];
    }

     for(j=0;j<n2;j++)
    {
        rt[j]=a[mid+1+j];
    }

    i=0;
    j=0;k=1;
    while((i<n1)&&(j<n2))
    {

                if(lt[i]<rt[j])
                   {
                       a[k]=lt[i];
                       i++;
                   }
                  else
                   {
                       a[k]=rt[j];
                       j++;
                   }
                   k++;
    }
        if(i<n1)
        {
            a[k]=lt[i];
            i++;
            k++;
        }
         if(j<n2)
        {
            a[k]=rt[j];
            j++;
            k++;
        }





}
