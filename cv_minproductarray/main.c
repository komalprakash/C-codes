#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int a[10],b[10],i,n,k;
    printf("enter n");
    scanf("%d",&n);
    printf("\nenter k");
    scanf("%d",&k);
    printf("enter elts for a");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    printf("%d\n",a[i]);
    }
    printf("\nenter elts for b");
    for(i=0;i<n;i++)
    {
    scanf("%d",&b[i]);
    printf("%d\n",b[i]);
    }
    int minsum=0 ,prod ,prod1, maxdiff=0, diff ;
    for(i=0;i<n;i++)
    {

    prod1=a[i]*b[i];
    if((prod1<0)&&(a[i]<0))
    {
        prod=(a[i]-2*k)*b[i];
    }
    else if((prod1<0)&&(b[i]<0))
    {
        prod =(a[i]+2*k)*b[i];
    }
    else if((prod1>0)&&(a[i]<0))
    {
        prod=(a[i]+2*k)*b[i];
    }
    else if (prod1>0&&(a[i]>0))
    {
        prod=((a[i]-2*k)*b[i]);
    }
    diff=abs(prod1-prod);
    if(diff>maxdiff)
    {
        maxdiff=diff;
    }
    minsum=minsum+prod1;
    }
    minsum=minsum-maxdiff;
    printf("minsum= %d", minsum);
    return 0;
}
