#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int v;
    int w;
    struct node* next;
}node;
int main()
{
    int n,w[10],a,b,p[10],i;
    printf("enter n");
    scanf("%d",&n);
   for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
        scanf("%d",&p[i]);
    }

    node* newnode, *trv;
    int vertex[10],visited[10];
    for(i=0;i<n;i++)
    {
        //scanf("%d %d",&a,&b);


    if(vertex[i]==NULL)
    {
         newnode=(node*)malloc(sizeof(node));
        vertex[i]=newnode;
        trv=newnode;

        trv->v=p[i];
        trv->next=NULL;
    }
    else
    {
         newnode=(node*)malloc(sizeof(node));
        trv=vertex[i];
        while(trv->next!=NULL)
            trv=trv->next;
        trv->next=newnode;
        trv=trv->next;
        trv->v=p[i];
        trv->next=NULL;
    }


       if(vertex[p[i]]==NULL)
    {
        newnode=(node*)malloc(sizeof(node));
        vertex[p[i]]=newnode;
        trv=newnode;
        trv->v=i;
        trv->next=NULL;

    }
    else
        {
            trv=vertex[p[i]];
            newnode=(node*)malloc(sizeof(node));
            while(trv->next!=NULL) trv=trv->next;
            trv->next=newnode;
            trv=trv->next;
            trv->v=i;
            trv->next=NULL;
        }

    }
    for(i=0;i<n;i++)
    {
        if(vertex[i]!=NULL)
        {
            printf("node connected to %d:",i);
            trv=vertex[i];
            while(trv!=NULL)
            {

                printf("%d",trv->v);
                 trv=trv->next;
            }
        }
    }


printf("enter vertex to start dfs");
int p;

scanf("%d",&p);
for(i=0;i<n;i++)
{
    q[i]=0;
}
dfs(p,vertex,q);
}

void dfs(int p,node* vertex[10],int q[])
{
    q[p]=1;
    node *trv;
   // printf("the node visited is %d",p);

    trv=vertex[p];
    while(trv!=NULL)
    {
        int f;
        f=trv->v;
        if(q[f]==0)
       {
           printf("\nthe node visited is %d",trv->v);
        dfs(f,vertex,q);

        }
       trv=trv->next;
    }
}
