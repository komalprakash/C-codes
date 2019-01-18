/*#include <stdio.h>
#include <stdlib.h>
int main()
{


 int a[100];
 int n,i,j,p=2;
 printf("Enter n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     a[i]=i;
   printf("a[%d]=%d\n",i,a[i]);
 }
 for(p=2;p*p<=n;p++)
 {
   if(a[p]!=0)
   {
       for(i=2*p;i<=n;i=i+p)
        a[i]=0;
   }
 }
 int sum=5,count=0;
 for(j=5;j<=n;j=j+2)
 {
     if(((a[j]!=0)&&(a[j]=sum))||(a[j]!=-1))
        count = count +1;

     if((a[j]!=0)||(a[j]==-1))
      {

       sum=sum+j;
        if(a[sum]!=0)
        {
            a[sum]=-1;
        }
      }

 }
printf("count = %d",count);

 return 0;
}
*/

#include<stdio.h>
int prime(int x){
int i,prime=1;
for(i=2;i<x;i++){
if(x%i==0){
prime=0;
break;
}
}
if(prime==0){
return 0;
}
else{
return 1;
}
}
void main(){
int n,sum=2,i,count=0;
printf("Enter the range:");
scanf("%d",&n);
for(i=3;i<=n;i++){
if(prime(i)){
sum=sum+i;
if(prime(sum)&&sum<=n){
printf("%d",sum);
count++;
}
}
}
printf("\n%d",count);
}
