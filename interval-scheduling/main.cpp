#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
typedef struct w
{
   long  s;
   long l;
   long f;
} w;


    void printMaxActivities(struct w k[], int n)
{
    int i, j;int count=1;


   // cout<<"Following activities are selected n";
    i = 0;
   // cout<< i;


    for (j = 1; j < n; j++)
    {

      if(k[j].s >= k[i].f)
      {
     //     cout<< j;
          i = j;
          count++;
      }
    }
    cout<<"\n"<<count;
}

bool myfunc(w i,w j)
{
    return (i.f<j.f);
}

int main()
{
    struct w k[1000];
    int n,i;
   stack<long> p,q;
    //long s[1000],l[1000],f[1000];
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>k[i].s>>k[i].l;
        k[i].f=k[i].s+k[i].l-1;
    }
   /* for( i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp1=i;int temp2=j;
            if(k[i].f>k[j].f)

                //swap(s[i],s[j]);
               swap(k[i],k[j]);
               //swap(i,j);
        }

    }*/
    myfunc(k[0],k[n]);
    sort(k,k+n,myfunc);

 //   for(int i=0;i<n;i++)
   //  cout<<"s="<<k[i].s<<"\tf="<< k[i].f<<"\t"<<"i="<<i<<endl;

      printMaxActivities(k,n);

}




     /*long temp1[1000],temp2[1000];int j=1;
      for(int i=0;i<n;i++)
    {
    p.push(k[i].f);
    q.push(k[i].s);
    }
    while(p.empty()==false&&q.empty()==false)
    {

     p.pop();
     temp2[j]=q.pop();
     j++;

    }
    */



