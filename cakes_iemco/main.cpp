#include <iostream>

using namespace std;

int main()
{
    int t,n,i,j;
    int max=0;
    //cin>>t;
    cin>>n;
    int arr[1000];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int sum[n];
    for(i=0;i<n;i++)
        sum[i]=arr[i];

  for(i=0;i<n;i++)
  {
      for(j=i;j<n;j++)
      {
          if(arr[i]<arr[j] && sum[i]<=(sum[j]+arr[i]))
            sum[i]=sum[j]+arr[i];
      }
  }
  for(i=0;i<n;i++)
  {
      if(max<sum[i])
        max=sum[i];
  }
  cout<<"max= "<<max;
    return 0;
}
