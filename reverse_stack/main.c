#include <stdio.h>
#include <stdlib.h>
int pop();
int push(int );
int top=-1;
int stk[10];

int main()
{
    int n,i,val;
    int arr[n];
    printf("enter n");
    scanf("%d",&n);
    printf("enter arr");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    push(arr[i]);

    for(i=0;i<n;i++)
    {val=pop();
        arr[i]=val;
    }
    for(i=0;i<n;i++)
    printf("the rev array is:\t%d",arr[i]);

    return 0;
}


int push(int val)
{
    //top=top+1;
    stk[++top]=val;
}

int pop()
{
    //int arr[];
   // top=top-1;
    return(stk[top--]);
}
