#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    struct node* child;
    int w;


}node;
int main()
{
    node *ptr;
  int a[1000],p[1000],i,j,k,n;
  node* vertex[1000], *trv;
  printf("enter no of nodes");
  scanf("%d",&n);

    for(j=0;j<n;j++)
  {
    vertex[j]==NULL;
  }


  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
      scanf("%d",&p[i]);
  }

for(i=0;i<n;i++)
{
  node* newnode;
   if(p[i]==-1)
    {
        newnode=(node*)malloc(sizeof(node));
         vertex[i]=newnode;
         trv=newnode;
         trv->w=a[i];
         trv->child=NULL;
    }


 for(k=0;k<n;k++)
  {
   if(p[k]==i)
    {

            // trv->child=p[k]
      if(vertex[i]==NULL)
      {
         newnode=(node*)malloc(sizeof(node));
         vertex[i]=newnode;
         trv=newnode;
         trv->w=a[i];
         trv->child=k;

      }
      else
        {
            trv=vertex[i];
            newnode=(node*)malloc(sizeof(node));
            while(trv!=NULL) trv=trv->child;
            trv->child=newnode;
            trv=trv->child;
            trv->w=a[i];
            trv->child=k;
        }
    }

  }
}

 /*for(i=0;i<n;i++)
 {
    if(vertex[i]!=NULL)
      {
             trv=vertex[i];
             x[t]=trv->w;
             t++;

           while(trv!=NULL)
           {
               trv=trv->child;
               s[t]=trv->child;
               t++;
           }

        }

    }*/
    int max=0;
    int diff=0,m=0;
    int x[100][100];
    for(i=0;i<n;i++)
    {
     if(vertex[i]!=NULL)
        trv=vertex[i];
       x[i][m]=trv->w;
       m++;
       while(trv!=NULL)
        {
            trv=trv->child;
            x[i][m]=trv->w;
            m++;
            //diff=a[i][m]-a[i+1][m];
        }
    }

    for(i=0;i<n;i++)
    {
      m=0;
        diff=a[i][m]-a[i+1][m];
        m++;
         if(diff>max)
            max=diff;

    }

   printf("%d",diff);


    return 0;
}
