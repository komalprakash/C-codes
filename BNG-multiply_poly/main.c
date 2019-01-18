#include<stdio.h>
struct terms
{
int coefficient,degree;
struct terms *next;
};
typedef struct terms term;

term *HEADANS; // POINTER TO THE LINKED LIST CONTAINING THE ANSWER.

int store(int c,int d) //THIS FUCTION STORES ALL THE TERMS. IF A TERM COMES WHOSE EXPONENT IS SAME AS THAT OF WHAT IS STORED IN THE ANS COEFFICIENT IS JUST
                     // ADDED IN THE ELSE IF CASE OTERWISE THE WHOLE TERM IS INSERTED IN THE ANS LINKED LIST.
{
   if(HEADANS==NULL)
   {
       HEADANS=(term *)malloc(sizeof(term)); HEADANS->coefficient=c; HEADANS->degree=d; HEADANS->next=NULL;


       return 0;
   }
   term *trv=HEADANS; int i=1;
   while(trv!=NULL)
   {
       if(d>trv->degree) { insert(&HEADANS,i,c,d);  return 0; }
       else if(d==trv->degree) { trv->coefficient+=c;  return 0; }
       trv=trv->next; i++;

   }
   insert(&HEADANS,i,c,d);

    return 0;

}

int insert(term **head1,int pos,int c,int d)
{
   int i=1; term *head=*head1;
   if(pos==1)
   {
       term *newnode=(term *)malloc(sizeof(term)); newnode->coefficient=c; newnode->degree=d; newnode->next=head;
       *head1=newnode;
   }
   else
   {
       for(i=2;i<=(pos-1);i++)
       {
           head=head->next;
           if(head==NULL)  { printf("Invalid Input"); return 0; }
       }

       term *newnode=(term *)malloc(sizeof(term)); newnode->coefficient=c; newnode->degree=d; newnode->next=head->next;
       head->next=newnode;
       return 0;
   }
}

void display(term *head)
{
    printf("\n");
    while(head!=NULL)
    {
        printf("(%dx^%d) +",head->coefficient,head->degree);
        head=head->next;
        }
}

void create(term **p)
{
    int a,b;
    scanf("%d",&a);
    if(a!=-999)
    {
        scanf("%d",&b);
    *p=(term *)malloc(sizeof(term));
    (*p)->coefficient=a; (*p)->degree=b;
    create(&((*p)->next)) ;
    }
    else *p=NULL;

}

void main()
{
    term *hp1,*hp2,*ptr1,*ptr2;
    printf("\n Enter The First polynomial \n");
    printf("enter Coefficient followed by degree and -999 as coefficient to end \n");
    printf("for eg to enter 5x^2+6x^1 enter 5 2 6 1 -999 \n");
    create(&hp1);
    display(hp1);

     printf(" \n Enter The Second polynomial coefficient followed by degree and -999 as coefficient to end \n");
    create(&hp2);


    display(hp2);
    ptr1=hp1; ptr2=hp2;

    while(ptr1!=NULL)
    {
        while(ptr2!=NULL)
        {

            store(ptr1->coefficient*ptr2->coefficient,ptr1->degree+ptr2->degree); //TERMS ARE GENERATED AND SEND TO STORE TO BE STORED
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
        ptr2=hp2;

    }
    printf("\n The Display of the Answers");
    display(HEADANS);


}
