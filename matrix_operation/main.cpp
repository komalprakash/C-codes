#include <iostream>
#include<math.h>
using namespace std;
void cofactor(int ,int ,int ,int** ,int [50][50]);
int** create(int n)
{
    int **t;
    t=new int*[10];
    for(int i=0;i<n;i++)
    {
        t[i]=new int[10];
    }
    return t;
}

void transpose(int**a,int n)
{
    int** b;
    b=create(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }

       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       cout<<b[i][j]<<" ";
       cout<<"\n";
    }
}

void display(int **a,int n)
{
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       cout<<a[i][j]<<" ";
       cout<<"\n";

    }
}




int det(int**a,int n)
{
    int x,sum=0,i,j;
    int**c;
    int temp[n][n];
    c=create(n);
    if(n==1)
        return a[0][0];

        for(int k=0;k<n;k++)
        {
            x=pow(-1,(i+j));
            for(i=0;i<n;i++)
                cofactor(0,i,n,a,temp);
            sum=sum+(x*(a[0][i])*(det(temp,n-1)));
        }


    return sum;

}

void cofactor(int p,int q,int n,int** a,int temp[10][10])
{
    int row=0,col=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i!=p)&&(j!=q))
            {
                temp[row][col]=a[i][j];
                col++;
                if(col==n-1)
                {
                    col=0; row++;
                }
            }
        }
    }
}



int main()
{
    int** a,n;
    cout<<"n:";
    cin>>n;
    a=create(n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       cin>>a[i][j];
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       cout<<a[i][j]<<" ";
       cout<<"\n";
    }
    cout<<"\ntranpose is\n";
    transpose(a,n);
    display(a,n);
    cout<<"\ndet is:"<<det(a,n);
    return 0;
}
