#include<stdio.h>
#include<stdlib.h>
int main()
{


 int n;

 printf("Enter n:");
 scanf("%d",&n);
 float i=0.00 ;
 while(i*i<=n)
 {
 i=i+0.001;
 }
 i=i-0.001;
 printf("%.2f",i);
 }


