#include <stdio.h>
#include <stdlib.h>




typedef struct poly
{
   struct poly *next;
   int coeff;
   int exp;
}poly;
poly *start=NULL;
poly *start1=NULL;
poly* start2=NULL;
poly *create1(poly*start1);
poly *create2(poly*start2);
poly *display(poly*);
poly *add(poly*,poly*,poly*);

int main()
{
    int ch,opt;
    do
    {
    printf("1.to create poly1");
    printf(" \n2.to ceate poly2 ");
    printf("\n 3.to display 1st");
    printf(" \n4.to display 2nd ");
    printf("\n5.to add them ");
    printf("\n6.to display them");

    printf("\n7.to exit");
    printf("\nenter the option:");
    scanf("%d",&opt);

        switch(opt)
        {
        case 1:create1(start1);
        printf("LL created\n");
        break;
        case 2:create2(start2);
        printf("LL2 created\n");
        break;
        case 3:start=display(start);
        printf("our LL :)\n");
        break;
        case 4:display(start2);
        break;
        case 5:add(start1,start2,start);
        break;
        case 6:display(start);
        }
    }while(opt!=7);

   return 0;
}
 poly *create1(poly *start1)
{
    int ch,coeff,exp;
    poly *newnode,*ptr;
    while(ch!=0)
    {
        newnode=(poly*)malloc(sizeof(poly));
    printf("enter coeff");
    scanf("%d",&coeff);
    printf("enter exp");
    scanf("%d",&exp);
    newnode->coeff=coeff;
    newnode->exp=exp;
    if(start1==NULL)
            {
              start1=newnode;
              newnode->next=NULL;
            }
        else
            {
             ptr=start1;
             while(ptr->next!=NULL)
                ptr=ptr->next;
             ptr->next=newnode;
             newnode->next=NULL;

            }
    printf("continue adding?y=1/n=0");
    scanf("%d",&ch);
    }

return start1;
}

poly *create2(poly *start2)
{
    int ch,exp,coeff;
    poly *newnode,*ptr;
    while(ch!=0)
    {
    newnode=(poly*)malloc(sizeof(poly));
    printf("enter coeff");
    scanf("%d",&coeff);
    printf("enter exp");
    scanf("%d",&exp);
    newnode->coeff=coeff;
    newnode->exp=exp;
    if(start2==NULL)
    {
        start2=newnode;
        newnode->next=NULL;
    }
    else
    {
        ptr=start2;
        while(ptr->next!=NULL)
        ptr=ptr->next;
        ptr->next=newnode;
        newnode->next=NULL;
    }
    printf("continue adding?y=1/n=0");
    scanf("%d",&ch);
    }

return start2;
}

poly *display(poly *start)
{
printf("to display");
    struct poly*ptr;
    ptr = start;
    //while(ptr!=NULL)
    do{
    printf("komal");

    printf("%dX^%d",ptr->coeff,ptr->exp);
    ptr=ptr->next;
    }while(ptr!=NULL);
    //printf("prakash");
    return start;
}

poly*add(poly*start1,poly*start2,poly*start)
{

    poly *ptr1, *ptr2, *ptr;
    ptr1=start;
    ptr2=start2;
    ptr=start;
    ptr=start;
    if(ptr1->exp==ptr2->exp)
    {
        {
        ptr->exp=ptr1->exp;
        ptr->coeff=ptr1->coeff+ptr2->coeff;
        ptr1=ptr1->next;
        ptr=ptr2->next;
        }
    ptr=ptr->next;
    }
    else if
        (ptr1->exp>ptr2->exp)
    {
        ptr->coeff=ptr1->coeff;
        ptr->exp=ptr1->exp;
        ptr1=ptr1->next;
        ptr=ptr->next;
    }
    else
        {
            ptr->exp=ptr2->exp;
           ptr->coeff=ptr2->coeff;
           ptr2=ptr2->next;
           ptr=ptr->next;
        }
        return start;
}




