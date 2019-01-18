#include <iostream>
#include<queue>
using namespace std;
int n;
//queue q;
void maxm(int**p);
int** create(int n)
{
  int **p;
  p=new int*[10];
  for(int i=0;i<n;i++)
  {
      p[i]= new int[10];
  }
  return p;
}
void display(int**x,int n)
{
     for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<x[i][j]<<" ";
      }
      cout<<"\n";
  }

}

void mul(int**a,int**b)
{
    int **c;int sum=0;
    c=create(n);
       for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          c[i][j]=0;
          for(int k=0;k<n;k++)
          {
              sum=a[j][k]*b[k][i];
              c[i][j]=c[i][j]+sum;
          }
      }
  }
  cout<<"mul matrix:\n";
  display(c,n);
  maxm(c);
}

void maxm(int**c)
{
    int mx=c[0][0],temp;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if((c[i][j])>mx)
          {
             // q.push_back(p[i][j]);
             mx=c[i][j];

          }
      }

  }
  cout<<"max is:"<<mx;

}

void min(int**p)
{

}

int main()
{
  int **x,**y;
  cout<<"n:";
  cin>>n;
  x=create(n);
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>x[i][j];
      }
  }
  display(x,n);
   y=create(n);
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>y[i][j];
      }
  }
  display(y,n);

  mul(x,y);

}
