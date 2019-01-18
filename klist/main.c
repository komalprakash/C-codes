#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node*start=NULL;
node*start1=NULL;
node*start2=NULL;
node *newnode;
node*create(node *head);
node*create2(node *head);
node*display(node *head);
node*insertatbeg(node *head);
node*insertatend(node *head);
node *insertatX(node *head);
node *deletex(node *head);
node *sort(node *head);
node *search(node *head);
node *reverse(node *head);
//node *mrge(node* head);

int main()
         {
           int option;

           do
           {
               printf("\n1.create 1st list");
               printf("\n2.create 2nd list");
               printf("\n3.display 1st list");
               //printf("\n4.display 2nd lost");
               printf("\n5.insert at beginning");
               printf("\n6.insert at end");
               printf("\n7.insert at any position X");
               printf("\n8.to delete any vlaue x");

               printf("\n9.to merge 2 nodes");
               printf("\n10.exit");
               printf("\n11.to sort the data");
               printf("\n12.to search any val");
               printf("\n13.to reverse the linklist");
               printf("\nenter your option: ");
               scanf("%d",&option);
               switch(option)
               {
                   case 1: start=create(start);
                   printf("\nLINKLIST CREATED");
                   break;
                   case 2: start2=create2(start2);
                   break ;
                   case 3: start= display(start);
                   break ;
                   case 5: start= insertatbeg(start);
                   break;
                   case 6: start= insertatend(start);
                   break;
                   case 7: start= insertatX(start);
                   break;
                   case 8: start=deletex(start);
                   break;
                   //case 9: start=mrge(start);
                   case 11: start=sort(start);
                   break;
                   case 12: start=search(start);
                   break;
                   case 13: start=reverse(start);
                   break;
               }
           }while(option!=10);
           getch();
           return 0;
         }
         struct node *create( node *start)
         {
             struct node *newnode1,*ptr;
             int num;
             printf("\n enter -1 to end");
             printf("\n enter the data");
             scanf("%d",&num);
             while(num!=-1)
             {
                 newnode1=( node*)malloc(sizeof( node));
                 newnode1->data=num;
                 if(start==NULL)
                 {
                     newnode1->next=NULL;
                     start=newnode1;
                 }
                 else
                 {
                     ptr=start;
                     while(ptr->next!=NULL)
                        ptr=ptr->next;
                     ptr->next=newnode1;
                     newnode1->next=NULL;

                 }
                 printf("\nenter the data");
                 scanf("%d",&num);
             }
         return start;
         }
         struct node *display( node* start)
         {
             struct node *ptr;
             ptr= start;
             while(ptr!=NULL)
             {
                 printf("\t %d->", ptr->data);
                 ptr=ptr->next;

             }
             return start;
         }
         node *insertatbeg(node *start)
         {
             int num;
             node *newnode;

             printf("enter data for this newnode\n");
             scanf("%d",&num);
             newnode=(node*)malloc(sizeof(node));
             newnode->data=num;
             newnode->next=start;
             start=newnode;

             return start;
         }
         node *insertatend(node *start)
         {
             int num;
             node *ptr;
             printf("enter data for newnode to insert at end");
             scanf("%d",&num);
             newnode=(node *)malloc(sizeof(node));
             newnode->data=num;
             newnode->next=NULL;
             ptr=start;
             while(ptr->next!=NULL)
             {
                 ptr=ptr->next;
             }
             ptr->next=newnode;

             return start;
         }
         node *insertatX(node *start)
         {
             int x,num;
             node *ptr, *preptr;
             printf("enter the data before which you want to enter");
             scanf("%d",&x);
             printf("enter data for newnode");
             scanf("%d",&num);
             newnode=(node*)malloc(sizeof(node));
             newnode->data=num;

             ptr=start;
             while(ptr->data!=x)
             {
                 preptr=ptr;
                 ptr=ptr->next;
             }
             preptr->next=newnode;
             newnode->next=ptr;
             return start;
         }
         node *deletex(node *start)
         {
          int x;
          node *ptr, *preptr;
          printf("enter the value to be deleted");
          scanf("%d",&x) ;
          ptr=start;
          while(ptr->data!=x)
          {
              preptr=ptr;
              ptr=ptr->next;
          }
            preptr->next=ptr->next;
            free(ptr);
            return start;
         }

        struct node *create2( node *start2)
         {
             struct node *newnode2,*ptr;
             int num;
             printf("\n enter -1 to end");
             printf("\n enter the data");
             scanf("%d",&num);
             while(num!=-1)
             {
                 newnode2=( node*)malloc(sizeof( node));
                 newnode2->data=num;
                 if(start2==NULL)
                 {
                     newnode2->next=NULL;
                     start2=newnode2;
                 }
                 else
                 {
                     ptr=start2;
                     while(ptr->next!=NULL)
                        ptr=ptr->next;
                     ptr->next=newnode2;
                     newnode2->next=NULL;

                 }
                 printf("\nenter the data");
                 scanf("%d",&num);
             }
         return start2;
         }


         node* sort (node* start)
          {
              int temp;
              node *ptr,*ptr2;

              ptr=start;
              while(ptr->next!=NULL)
              {
                  ptr2=ptr->next;
                  while(ptr2!=NULL)
                  {

              if(ptr->data > ptr2->data)
              {
                  temp=ptr->data;
                  ptr->data=ptr2->data;
                  ptr2->data=temp;

              }
              ptr2=ptr2->next;
                  }
                  ptr=ptr->next;
              }
              printf("\n\nthe sorted array is:");
              display(start);
              return start;
          }

          node* search(node *start)
          {

              int val;
              printf("enter the value which you want to search");
              scanf("%d",&val);

              while(start!=NULL)
             {
              if(start->data==val)
              {
                  printf("\nvalue found");
              }
              else
              {printf("\n not found");}

              start=start->next;
             }

             return start;
          }

          node *reverse(node*start)
          {
              node *ptr;
              node *ptr1;
              node *pre=NULL;
              ptr=start;
              while(ptr!=NULL)
              {
                  ptr1=ptr->next;
                  ptr->next=pre;
                  pre=ptr;
                  ptr=ptr1;

              }
              start=pre;
              return start;

          }



