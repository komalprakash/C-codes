#include <stdio.h>
#include <stdlib.h>
double sinx(int n)
{
    int i,x,num,den;
    double ans=x;
    double term;
    for(i=1;i<n;i++)
    {
        if(n%2==0)
      {

       num=num*(-1)*x*x;
       den=den*(i+1)*(i+2) ;
      }
      else
      {

       num=num*x*x;
       den=den*(i+1)*(i+2) ;
      }
    }
    term= num/den;
    ans= ans+ term;
    return ans;
}
int main()
{
    int n;
    printf("enter the terms upto which u want ur expansion");
    scanf("%d",&n);
    printf("sin(x)=%lf",sinx(n));
    return 0;
}
