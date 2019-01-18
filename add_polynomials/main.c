#include <stdio.h>
#include <stdlib.h>

typedef struct node{
int exp;
int coeff;
struct node*next;

}node;
node *start=NULL;
node* start1=NULL;
node*start2=NULL;

node*create(node *head)
{
    int ch;
    do
    {
        head=(node*)malloc(sizeof(node));
        printf("enter coeff");
        scanf("%d",&(head->coeff));
        printf("enter exp");
        scanf("%d",&(head->exp));
        head->next=NULL;
        printf("\nwant to create more?0/1");
        scanf("%d",&ch);
        if(ch)
        {
            head->next=(node*)malloc(sizeof(node));
            head=head->next;
            head->next=NULL;
        }
    }while(ch);
    //return head;
}

node *display(node *head)
{
    //node*ptr;
    //ptr=head;
    while(head!=NULL)
    {
        printf("(%dX^%d)+",(head->coeff),head->exp);
        head=head->next;
    }
    printf("%dX^%d",head->coeff,head->exp);
    //return head;
}

node*add(node*poly1,node *poly2,node *result)
{
    node*ptr, *ptr1;
    ptr1=result;
    ptr=(node*)malloc(sizeof(node));
    if(poly1->exp > poly2->exp)
    {
        ptr->exp= poly1->exp;
        ptr->coeff= poly1-> coeff;
        poly1= poly1->next;
    }
    else if(poly2->exp > poly1-> exp)
    {
        ptr->exp=poly2-> exp;
        ptr->coeff= poly2->coeff;
        poly2= poly2->next;

    }
    else
        {
        ptr->exp =poly1->exp;
    ptr->coeff= poly1->coeff + poly2->coeff;
    poly1=poly1->next;
    poly2=poly2->next;
        }

        if(poly1 || poly2)
        {
            ptr= (node*)malloc(sizeof(node));
            ptr=ptr->next;
            ptr->next= NULL;
        }
        while(poly1 ||poly2)
        {
            ptr->next=(node*)malloc(sizeof(node));
            ptr=ptr->next;
            if(poly1)
            {
                ptr->exp=poly1->exp;
                ptr->coeff= poly1->coeff;
                poly1= poly1->next;

            }
            if(poly2)
            {
                ptr->exp=poly2->exp;
                ptr->coeff=poly2->coeff;
                poly2=poly2->next;
            }
        }
        result=ptr;
        return result;
}



int main()
{
    int opt;
    node *poly1, *poly2,*result;
    //printf("Hello world!\n");
   do{ printf("1.1st node\n2.to display\n3.2nd node\n4.to add");

        printf("\tenter opt\n");
     scanf("%d",&opt);


     switch(opt)
     {
         case 1: start1=create(start1);
         break;
         case 2:display(start);
         break;
         case 3:start2=create(start2);
         break;
         case 4:start=add(poly1,poly2,result);
         break;

     }

     }while(opt!=6);
    return 0;
}
