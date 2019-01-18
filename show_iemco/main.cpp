/*
#include <iostream>
#include<cmath>
using namespace std;
void solve(){
	int n,count=0,i,k;
	int rating[n];

	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>rating[i];
	}
	for(i=0;i<n;i++){
		if(!(rating[i]<k)){
			count=count+1;
		}else{
		 count=count;
	}
	}
	cout<<count;

}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
		solve();
	}
	return 0;
}
*/


#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,k,i,j,x;
    int sum[10];
    int wt[100];
    cin>>t;


    for(x=0;x<t;x++)
    {
        cin>>n>>k;
         for(i=0;i<n;i++)
        cin>>wt[i];

        sum[x]=0;
        for(i=0;i<n;i++)
        {
            if(wt[i]>=k)
                sum[x]++;
            else sum[x];
        }

    }
    for(x=0;x<t;x++)
         cout<<"count="<<sum[x]<<"\n";

}


