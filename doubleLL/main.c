#include <stdio.h>
#include <stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype *pre, *next;
}node;

node* start=NULL;
node *create(node *head);
node *display(node *head);

int main()
{
    int opt;
do
{
    printf("\n1.to create");
    printf("\n2.to display");
    printf("\n3.to exit");
    printf("\nenter ur opt");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1: start=create(start);
        printf("Double Linklist is created");
        break;
        case 2: start=display(start);
        break;
    }
}while(opt!=3);
    return 0;
}
node *create(node *start)
{
    node *newnode, *ptr;
    int num;
    printf("\nenter 0 to end");
    printf("\nenter data");
    scanf("%d",&num);

    while(num!=0)
    {

    if(start==NULL)
     {
         newnode=(node*)malloc(sizeof(node));
         newnode->pre=NULL;
         newnode->data=num;
         newnode->next=NULL;
         start=newnode;
     }
     else
     {
         ptr=start;
         newnode=(node*)malloc(sizeof(node));
         newnode->data=num;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=newnode;
            newnode->pre=ptr;
            newnode->next=NULL;

     }
     printf("\nenter the data");
     scanf("%d",&num);
    }
    return start;

}
node *display(node *start)
{
    node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
