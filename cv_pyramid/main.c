#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("enter  n ie width of pyramid:");
   scanf("%d",&n);
   int k,l,i,j;
   k=-1;
   l=0;
   //printf("\t6\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<i;j++)

       {
           k=k+4;
           l=l+2;
           printf("\t%d",k*l);
       }
       printf("\n");
   }
   return 0;
}
