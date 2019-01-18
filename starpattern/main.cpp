#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
   /* int k=2*n-2;
    for(i=0;i<n-1;i++)
    {
    for(j=k;j>0;j--)
        cout<<" "<<"\n";
    for(j=0;j<i+1;j++)
            cout<<"*";
    } */

int k=n-1;



     for(i=0;i<n;i++)
    {
        for(j=k;j>0;j--)
       {
        cout<<"#";
       }
       k--;

       for(j=0;j<(2*i)-1;j++)
       {
           cout<<"*";
       }
       cout<<"\n";
    }
    return 0;
}
