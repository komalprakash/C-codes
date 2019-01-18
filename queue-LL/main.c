#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
typedef struct node
{
    int data;
    struct node*next;
}node;
typedef struct queue
{
struct node*front;
struct node*rear;
}queue;
struct queue *q;
void create(struct queue*);
queue *insert(queue*,int);
queue* delete(queue*);
queue* display(queue*);
int peek(queue*);

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
            case 1:printf("enter element to insert");
            scanf("%d",&val);
            q=insert(q,val);
            break;
            case 2:q=delete(q);
            break;
            case 3:val=peek(q);
            if(q!=-1)
                printf("val is %d",val);
            break;
            case 4:q=display(q);
            break;

        }
    }while(opt!=5);
    return 0;
}
void create(struct queue *q)
{
    q->rear=NULL;
    q->front=NULL;
}
queue*insert(queue* q,int val)
{
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=val;

    if(q->front==NULL)
    {
        q->front=ptr;
        q->rear=ptr;
        q->front->next = q->rear->next =NULL;

    }
    else
    {
        q->rear->next=ptr;
        q->rear=ptr;
        q->rear->next=NULL;
    }
    return q;
}

queue*delete(queue*q)
{
    node*ptr;
    ptr=q->front;
    if(q->front==NULL)
        printf("its empty");
        else
        {
            q->front=q->front->next;
            printf("val deleted is %d",ptr);
            free(ptr);
        }
        return q;
}

queue*display(queue*q)
{
    node*ptr;
    ptr=q->front;
    if(ptr==NULL)
        printf("the queue is empty");
    else
    {
        while(ptr!=q->rear)
            ptr=ptr->next;
        printf("%d",ptr->data);
    }
    return q;
}

int peek(queue*q)
{
    if(q->front==NULL)
    {
        printf("queue is null");
        return -1;
    }
    else
        return q->front->data;
}
