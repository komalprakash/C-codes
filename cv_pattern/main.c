#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char st[50];
    int i,j,l,row;
    printf("enter row no.");
    scanf("%d",&row);
    printf("enter the string");
    gets(st);
    l=strlen(st);
    for(i=0;i<l;i++)
    {
        printf("the characters are %c\n",st[i]);
    }
    //for(i=0;i<row-1;i++)
    //{
        for(j=1;j<row-1;j=j+4)
        printf("%c",st[j]);
        j=j-row+1;

        for(j=0;j<row-2;j=j-4)
        printf("%c",st[j]);

        j=j-row+1;

        for(j=0;j<row-2;j=j+4)
        printf("%c",st[j]);

        j=j+row-1;
        printf("%c",st[j]);

        j=j-row+2;
        printf("%c",st[j]);

        for(j=0;j<row-1;j=j+4)
        printf("%c",st[j]);

    return 0;
}
