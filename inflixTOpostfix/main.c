#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
char st[MAX];
int top=-1;
void push(char st[],char);
char pop(char st[]);
void inftopost(char infix[], char postfix[]);
int getpriority(char);

int main()
{
    char infix[100], postfix[100];
    printf("enter any inflix exp");
    gets(infix);
    strcpy(postfix,"");
    inftopost(infix,postfix);
    printf("the corres postfix exp is:");
    puts(postfix);
    getch();
    return 0;
}

void inftopost(char infix[], char postfix[])
{
    int i=0,j=0;
    char temp;
    strcpy(postfix,"");
    while(infix[i]!='\0')
    {
      if (infix[i]=='(')
      {
          push(st,infix[i]);
          i++;
      }
      else if(infix[i]==')')
      {
          while((top!=-1)&&(st[top]!='('))
          {
              postfix[j]=pop(st);
              j++;
          }
          if(top==-1)
          {
              printf("incorrect expression");
              exit(1);
          }
          temp=pop(st);  //for removing left parenthesis
          i++;
      }

      else if(isdigit(infix[i])||isalpha(infix[i]))
      {
          postfix[j]=infix[i];
          j++;
          i++;
      }

      else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||
              infix[i]=='%'||infix[i]=='/')
      {
          while((top!=-1)&&(st[top]!='(')
                            &&(getpriority(st[top])>getpriority(infix[i])))
                    {
                        postfix[j]=pop(st);
                        j++;
                    }
                    push(st,infix[i]);
                    i++;
      }


      else
      {
          printf("incorrect statement ");
          exit(1);
      }
    }
    while((top!=-1)&&(st[top]!='('))
    {
        postfix[j]=pop(st);
        j++;
    }
    postfix[j]!='\0';

}

int getpriority(char op)
{
    if(op=='/'||op=='*'||op=='%')
        return 1;
    else if (op=='+'||op=='-')
        return 0;
}


void push(char st[],char val)
{
    if(st[top]==MAX-1)
        printf("stack overflow");
    else
    {
        top=top+1;
        st[top]=val;
    }
}

char pop(char st[])
{
    if(top==-1)
        printf("\n stack underflow");
    else
    {
        top=top-1;
        return(st[top]);
    }
}
