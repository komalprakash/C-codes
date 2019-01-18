#include <bits/stdc++.h>
using namespace std;

const int MAX = 10001;
bool isVisited[MAX];
int depth[MAX];
vector<int> adj[MAX];

void dfs(int v, int l){
    isVisited[v] = true;
    depth[v] = l;
    int aux;
    for (int i=0;i<adj[v].size();i++){
        aux = adj[v][i];
        if (!isVisited[aux])
            dfs(aux,l+1);
    }
}

int main() {
	int T,N,x,y,ans,odd,even;
	cin >> T;
	while (T-->0){
	    ans = odd = even = 0;
	    cin >> N;
	    for (int i=0;i<N;i++){
	        isVisited[i]=false;
	        adj[i].clear();
	    }

	    for (int i=0;i<N-1;i++){
	        cin >> x >> y;
	        adj[x-1].push_back(y-1);
	        adj[y-1].push_back(x-1);
	    }
	    dfs(0,0);
	    for (int i=0;i<N;i++)
	        depth[i] %2 ? odd++ : even++;
	    ans = (odd*(odd-1))/2 + (even*(even-1))/2;
	    cout << ans << endl;

	}
	return 0;
}
