#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
int display(int st[]);
int peek(int st[]);
int main()
{
    int val,opt;
    printf(" 1-push\n 2-pop\n 3-display\n 4-peek\n 5-exit\n");
    do
    {printf("\nenter opt");
    scanf("%d",&opt);


    switch(opt)
    {
        case 1: printf("enter val");
        scanf("%d",&val);
            push(st, val);
            break;

            case 2:val=pop(st);
            if (val!=-1)
                printf("\nthe val to be dltd frm stack is %d\n",val);
            break;
            case 3:display(st);
            break;
            case 4: val=peek(st);
            printf("%d",val);
            break;
    }
    //printf("enter opt");
    //scanf("%d",&opt);


    }while(opt!=5);
//getch();
    return 0;
}

void push(int st[],int val)
{
    if(top==MAX-1)
        printf("\nstack overflow");
    else
        {
            top=top+1;
            st[top]=val;
        }
}
int pop(int st[])
{
    int val;
    if(top==-1)
        printf("stack underflow");
    else
        {
            val=st[top];
            top=top-1;
            return val;
        }
}
int display(int st[])
{
    int i;
    if (top==-1)
        {printf("the stack is empty");
        return -1;}

    else
        for(i=top;i>=0;i--)
            printf("\n%d",st[i]);

}

int peek(int st[])
{
    if(top==-1)
    {

    printf("the st is empty");
        return -1;
    }
    else
        return (st[top]);
}
