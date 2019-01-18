#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n,sum=0;
    cout<<"enter n";
    cin>>n;
   cout<<"\nenter elts for a nd b";
     for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
        cin>>a[i][j];
       }
   }

      for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
         cin>>b[i][j];
       }
   }

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           for(k=0;k<n;k++)
           {
               c[i][j]=a[i][k]*b[k][j];

           }
           sum=sum+c[i][j];
       }
   }
      for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
         cout<<" "<<sum;
       }
       cout<<  "\n";
   }
}
