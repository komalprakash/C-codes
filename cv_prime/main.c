#include <stdio.h>
#include <stdlib.h>
int main()
{


 int a[100];
 int n,i,j;
 printf("Enter n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     a[i]=i;
   printf("a[%d]=%d\n",i,a[i]);
 }

 for(i=3;i<n;i++)
 {
     printf("F");

     for (j=2;j<=i-1;j++)
     {
         printf("F");
         if(i%j==0 )
         {
             printf("no %d is not prime\n",a[i]);
         }
         else printf("%d is prime\n",a[i]);
     }
 }
 return 0;
}

