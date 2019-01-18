#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int array[n];
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {

    printf("%d",array[i]);
    }
    return 0;
}
