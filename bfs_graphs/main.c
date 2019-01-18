#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int v;
    struct node* next;
    struct node* vis;
}  node;
int arr[100];
int start=0;
int end=-1;
void push(int a)
{
    end++;
    arr[end]=a;

}
int pop()
{
    if(end<start) return -999; //When the queue is empty.
    int val=arr[start];
    start++;
    return val;

}
int bfs(int x, node* vertex[],int n);
int dfs(int y, node* vertex[10], int visited[10]);
int main()
{
   node* vertex[10];

    int m,n,a,b,i;

    printf("n=vertex, m=edge");
    scanf("%d %d",&n,&m);
    printf("\n n=%d m=%d",n,m);
    node* trv;
    node* newnode;
    for(i=0;i<10;i++)
      vertex[i]=NULL;

    for(i=0;i<m;i++)
    {
        printf("\n enter a and b for edge");
        scanf("%d %d",&a,&b);

        if(vertex[a]==NULL)
        {
            newnode=(node*)malloc(sizeof(node));
            vertex[a]=newnode;
            trv=newnode;
        }
        else{
            trv=vertex[a];
            while(trv->next!=NULL) trv=trv->next;
            trv->next=(node*)malloc(sizeof(node));
            trv=trv->next;
        }
        trv->v=b;  trv->next=NULL;

        if(vertex[b]==NULL)
        {
            newnode=(node*)malloc(sizeof(node));
            vertex[b]=newnode;
            trv=newnode;
        }
        else{
            trv=vertex[b];
            while(trv->next!=NULL) trv=trv->next;
            trv->next=(node*)malloc(sizeof(node));
            trv=trv->next;
        }
        trv->v=a;  trv->next=NULL;
    }

    for(i=0;i<n;i++)
    {


        if(vertex[i]!=NULL)
        {
        printf("\n vertex connected to node %d :",i);

        trv=vertex[i];
        while(trv!=NULL)
        {
            printf(", %d ",trv->v);
            trv=trv->next;
        }
        }
    }


int x,y;
printf("enter the vertex to start bfs");
scanf("%d",&x);
bfs(x,vertex,n);


   //for DFS
   printf("\nenter y for dfs:");
   scanf("%d",&y);
   int j,visited[10];//parent[10];
    for(j=0;j<n;j++)
    {
        visited[j]=0;
       // parent[j]=-1;
    }
  dfs(y,vertex,visited);

}
int bfs(int x, node* vertex[10],int n)
{
     int i, visited[10],trv;

  for(i=0;i<n;i++)
  {
      visited[i]=0;

  }

  push(x);
  visited[x]=1;
 while ((trv=pop())!=-999)
 {
    printf("\n The vertex visited is %d",trv);

    node*trv1;
    trv1=vertex[trv];
    while(trv1!=NULL)
      {
         //printf("\n Adjacent is %d",trv1->v);
         if(visited[trv1->v]==0)
         {
          //printf("\n Pushed is  %d",trv1->v);
          push(trv1->v);
          visited[trv1->v]=1;
         }
        trv1=trv1->next;
          }
 }

}

int dfs(int y, node* vertex[10], int visited[10])
{
    int f; node* trv;
     push(y);
    visited[y]=1;}

    trv=vertex[y];
    while(trv->next!=NULL){
    push(trv->next->v);
    visited[trv]=1;}

    while((f=pop())!=-999)
    {
        if(!visited[f])
            dfs(f,vertex,visited);
            printf("\nnode visited is:",%d);
    }

}

/*int dfs(int x, node* vertex,int visited,int parent)
{

   // int visited[10];
  visited[x]=1;
    node*trv;
    int i,j;
   // for(i=0;i<n;i++)
    //{
        trv=vertex[x];
        while(trv->next!=NULL)
        {
          if(trv->next=j)
          parent[j]=i;
          dfs(j,vertex,i);

        }
}
*/
