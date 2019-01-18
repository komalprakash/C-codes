#include <stdio.h>
#include <stdlib.h>
#define MAX 10
//FIFO
int rear=-1, front =-1;
int queue[MAX];
void insert()
{
    int val;
    printf("elt u wnt to insert:");
    scanf("%d",&val);
    //if(front)
    if(rear==MAX-1)
        printf("overflow");
    else if(front==-1 && rear==-1)
        front=rear=0;
    else
        rear=rear+1;
    queue[rear]=val;
}
void display()
{int i;
printf("\n");
    if(front==-1 || front>rear)
        printf("queue is empty");
    else
    {
        for(i=front;i<=rear;i++)
            printf("\t%d",queue[i]);
    }

}

void peek()
{
    if(front==-1 || front>peek)
    printf("underflow");
    else
        printf("%d",queue[front]);
}
void delete()
{
 int val;
 if(front ==-1 || front>rear)
        printf("underflow");
 else
            val=queue[front];
 front=front+1;
 printf("%d",val);
 if(front>rear)
    front=rear=-1;
}

int main()
{
    int opt;
    do{
    printf("1.to insert\n2.delete\n3.peek\n4.display\n5.exit");
    printf("enter opt");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:insert();
        break;
        case 2:delete();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
    }
    }while(opt!=5);
    return 0;
}
