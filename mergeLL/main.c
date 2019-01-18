#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node*start=NULL;
node*start1=NULL;
node*start2=NULL;

node *newnode;
node *create1(node *head);
node *create2(node *head);
node *display(node *head);
node *mrge(node *head, node *head1);

int main()
         {
           int option;

           do
           {
               printf("\n1.create 1st list");
               printf("\n2.create 2nd list");
               printf("\n3.display 1st list");
               printf("\n4.display 2nd list");

               printf("\n5.to merge 2 nodes");
               printf("\n6.exit");
               printf("\nenter your option: ");
               scanf("%d",&option);
               switch(option)
               {
                   case 1: start1=create1(start1);
                   printf("\nLINKLIST CREATED");
                   break;
                   case 2: start2=create2(start2);
                   break ;
                   case 3: start1= display(start1);
                   break ;
                   case 4: start2= display(start2);
                   break;
                   case 5: start= mrge(start1,start2);
                   break;
               }
           }while(option!=6);
           getch();
           return 0;
         }
         node *create1(node *start1)
         {
             node *newnode1,*ptr;
             int num;
             printf("\n enter -1 to end");
             printf("\n enter the data");
             scanf("%d",&num);
             while(num!=-1)
             {
                 newnode1=( node*)malloc(sizeof( node));
                 newnode1->data=num;
                 if(start1==NULL)
                 {
                     newnode1->next=NULL;
                     start1=newnode1;
                 }
                 else
                 {
                     ptr=start1;
                     while(ptr->next!=NULL)
                        ptr=ptr->next;
                     ptr->next=newnode1;
                     newnode1->next=NULL;

                 }
                 printf("\nenter the data");
                 scanf("%d",&num);
             }
         return start1;
         }


          node *create2(node *start2)
         {
            node *newnode2,*ptr;
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
         return start2 ;
         }

         node *display(node *start)
         {
             node* ptr;
             ptr= start;
             printf("the linklist is:");
             while(ptr!=NULL)
             {
                 printf("\t %d->", ptr->data);
                 ptr=ptr->next;

             }
             return start;
         }
        /* display2()
         {
             struct node2 *ptr2;
             printf("the 2nd linklist is:");
             for(ptr2=start2;ptr2=!NULL;ptr2=ptr2->next)
             {
                 printf("\t%d->",ptr2->data);
             }
             return start2;
         }*/



         node* mrge(node *start1,node *start2)
         {

             node *ptr1,*ptr2,*ptr;
             ptr1=start1;
             ptr2=start2;
             while(ptr1->next!=NULL)
             {ptr1=ptr1->next;}
             ptr1->next=start2;

          return start;
          }



