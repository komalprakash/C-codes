#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*next;
}*start=NULL;
void create()
   {
    char ch;

   do
        {
        struct node* newnode,*t;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data for newnode");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        printf("do you want to create another:y/n\n");
        scanf("%s",&ch);


        if(start==NULL)
        {
            start=newnode;
            t=newnode;
        }
        else
        {
            t->next=newnode;
            newnode->next=NULL;
            t=newnode;
        }


       }while(ch!='n');
    }
int main()
{
    create();
    return 0;
}
