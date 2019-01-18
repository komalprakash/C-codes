#include<iostream>
using namespace std;

int main()
{
int n,q,k,d,i,j,m;
cin>>n>>q>>d;
int l[n],r[n],total=0;
//int h[n]=0;

//int sum[q];
int ans[q];
int x[1000];int arr[100][100]; int b[1000];
for(i=0;i<n;i++)
{
cin>>l[i]>>r[i];
}


for(i=0;i<n;i++)
{
x[i]=((r[i]-l[i])/d)+1;
}

for(i=0;i<n;i++)
{
total=total+x[i];
}


for(j=0;j<n;j++)
{
    for(k=1;k<=x[j];k++)
    {
       arr[j][0]=l[j];
       arr[j][k]=l[j]+(k-1)*d;
    }
}

for(j=0;j<n;j++)
{
    for(k=1;k<=x[j];k++)
    {
       cout<<arr[j][k]<<" ";
    }
    cout<<"\n";
}

for(i=0;i<total;)
{
    for(m=0;m<n;m++)
    for(j=0;j<=x[m];j++)
    {
        b[i++]=arr[m][j];

    }
}

for(i=0;i<total;i++)
{
    cout<<b[i]<<" ";
}
return 0;
}
