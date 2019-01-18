#include <iostream>
#include<string>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s,a;

   cin>>s;
   int i,j,k;
    i=0;
    while(i<n)
    {
        k=i;
        for(j=n;j>0;j--)
        {
            while(j>=k)
            {
                if(a[k]==a[j])
                {
                    k++;
                    j--;
                }

                else
                {
                   //cout<<"not found";
                    break;
                    cout<<"not found";
                }

                 if(j==k)
                 {
                      for(int a=j;a<k;a++)
                        cout<<s[a];
                 }

            }

        }
        i++;
    }
    return 0;
}
