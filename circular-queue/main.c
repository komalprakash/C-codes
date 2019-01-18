#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX];
int front =-1,rear=-1;
void insert(void);
int delete(void);
int peek(void);
void display(void);

int main()
{
    int opt,val;
    do
    {
        printf("\n1.insert\n2.delete\n3.peek\n4.display\n5.exit");
        printf("\tenter opt");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:insert();
            break;
            case 2:val=delete();
            if(val!=-1)
                printf("\nval deleted is %d",val);
            break;
            case 3:val=peek();
            if(val!=-1)
                printf("\nval is %d",val);
            break;
            case 4:display();
            break;

        }
    }while(opt!=5);
    return 0;
}

void insert()
{
    int num;
    printf("enter num to insert");
    scanf("%d",&num);
    if(front==0 && rear==MAX-1)
    {
        printf("OVERFLOW");
    }
    else if(front==-1 && rear==-1)
    {
        front = rear=0;
        queue[rear]=num;
    }
    else{ rear++; queue[rear]=num;}
}

int delete()
{
    int val;
    if(front==-1 && rear==-1)
       {

       printf("underflow");
    return-1;}
    val=queue[front];
    if(front=rear)
        front=rear=-1;
    else
    {
        if(front==MAX-1)
            front=0;
        else
        front = front+1;
     }
     return val;
}

int peek()
{

    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
        return -1;
    }
    else return queue[front];
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("empty queue");
    }
    else
    {
        if(front<rear)
        {
            for(i=front;i<=rear;i++)
                printf("\t%d",queue[i]);
        }
        else
        {
            for(i=front;i<=MAX-1;i++)
                printf("%d",queue[i]);
            for(i=0;i<=rear;i++)
                printf("\t%d",queue[i]);
        }
    }
}
