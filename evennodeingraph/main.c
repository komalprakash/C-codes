#include <stdio.h>
#include <stdlib.h>

int main()
{

	int t,n,i,j,x[10],y[10];
	int count=0;
	printf("testcases");
	scanf("%d",&t);//testcase
	printf("\nnodes");
	scanf("%d",&n);//nodes
	for(i=0;i<n-1;i++)
	{
	scanf("%d %d",&x[i],&y[i]);
	}
	printf("\neven nodes are\n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {

        	if((((y[i]-x[j]+1)/2)==0)&&(y[i]-x[j])!=0)
            	{
            	    printf("%d %d\n",x[i],y[j]);
            	    count++;
            	}

            else if((((y[i]-y[j]+1)/2)==0)&&(y[i]-y[j])!=0)
            	{
            	    printf("%d %d\n",y[i],y[j]);
            	    count++;
            	}

            else if((((x[i]-x[j]+1)/2)==0)&&(x[i]-x[j])!=0)
            	{
            	    printf("%d %d\n",x[i],x[j]);
            	    count++;
            	}
	    }
	}
	printf("%d",count);
	return 0;
}
