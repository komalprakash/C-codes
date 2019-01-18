#include <iostream>

using namespace std;

int main()
{
    int n; int a[1000][1000]; int sum[1000][1000];
    int z=0;int i=0,j=0;
    cout<<"Enter value"<<endl;
    cin>>n;
    cout<<n<<endl;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          cin>>a[i][j];

        for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
          {
             if(i==0 && j==0)
                sum[0][0]=a[0][0];
             else if(i==0)
                sum[0][j]=sum[0][j-1]+a[i][j];
             else if(j==0)
                sum[i][0]=sum[i-1][0]+a[i][j];
             else
                sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
          }
        }


       int maxsum=0,tempsum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
              for(z=0;(i+z)<n && (j+z)<n;z++)
              {
                tempsum=sum[i+z][j+z] - sum[i-1][j+z] -sum[i+z][j-1] + sum[i-1][j-1];
                if(tempsum>maxsum)
                    maxsum=tempsum;
              }
            }
        }

        cout<<maxsum<<endl;




    return 0;
}
