#include <iostream>
#include <stack>
using namespace std;
typedef struct w
{
   long  s;
   long l;
   long f;
}w;


    void printMaxActivities(struct k[], int n)
{
    int i, j;

    cout<<"Following activities are selected n";
    i = 0;
    cout<< i;


    for (j = 1; j < n; j++)
    {

      if (k[j].s >= k[i].f)
      {
          cout<< j;
          i = j;
      }
    }
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
    for( i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(k[i].f<k[j].f)

                //swap(s[i],s[j]);
               swap(k[i],k[j]);
        }

    }
    for(int i=0;i<n;i++)
     cout<<"s="<<k[i].s<<"\tf="<< k[i].f<<"\t"<<endl;

      printMaxActivities(k,n);






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



}
