#include <stdio.h>
#include <stdlib.h>
double f(double x)
{
    double ans= 1/(x+1);
    return ans;
}


int main()
{
    int n,i;
    double a,b;
    printf("enter a,b,n");
    scanf("%lf %lf %d",&a,&b,&n );
    double h;
    h=(b-a)/n;
    double ans,ans1=0,ans2=0;
    ans=f(a)+f(b);
    for(i=2;i<n;i=i+2)
    {
        ans1=ans1+f(a+i*h);
    }
    for(i=1;i<n;i=i+2)
    {
        ans2=ans2+f(a+i*h);
    }
    ans=h*(ans + 2*ans1 + 4*ans2)/3;
    printf("ans is= %lf",ans);



    return 0;
}
