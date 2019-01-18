#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int vis[10],n;

class ver
{
public:
    vector <int> v;
};

void bfs(ver x[10],int c)
{
    for(int i=0;i<n;i++)
    vis[i]=0;
    queue <int> q;
    q.push(c);
    vis[c]=1;
    int temp;
    while(q.empty()==false)
    {
        temp=q.front();
        q.pop();
        for(vector <int>::iterator itr=x[temp].v.begin();itr!=x[temp].v.end();++itr)
        {
            if(vis[*itr]==0)
            {
                q.push(*itr);
                vis[*itr]=1;
                cout<<"node visited"<<*itr<<", ";
            }
        }
    }
}


int main()
{
    ver x[10];
    int a,b,m,c;
    cout<<"enter vertex nd edges";
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
     cout<<"enter the edges";
     cin>>a>>b;
     x[a].v.push_back(b);
     x[b].v.push_back(a);
    }
    cout<<"to start bfs:";
    cin>>c;
    bfs(x,c);

    return 0;
}
