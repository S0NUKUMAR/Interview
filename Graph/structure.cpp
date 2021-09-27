#include <bits/stdc++.h>
using namespace std; 
void solve(){
    int n , m ;
    cin>>n>>m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++) {
        for(int a : adj[i]){
            cout<<a<<" ";
        }
    }
}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

        int tc=1;
        while(tc--){
            solve();
        }
    return 0;
}