#include <stdio.h>
#include <stdlib.h>
int evenodd(int);
int main()
{
int n,flag;
scanf("%d",&n);
printf("the req no is %d",n);
flag=evenodd(n);
if(flag==1)
{
    printf("\neven");
}
else
    printf("\nodd");

    return 0;
}
int evenodd(int i)
{if(i%2==0)
return 1;
else
    return 0;

}
