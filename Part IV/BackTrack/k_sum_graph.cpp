#include<bits/stdc++.h>
#define int             long long int
#define pb              push_back
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mod             1000000007
#define w(x)            int x; cin>>x; while(x--)
using namespace std;
 




bool solve(int src,int k,vector<pair<int,int> > g[],vector<bool> &vis){
    vis[src] = true;
    if(k<=0) return true;

    for(auto x:g[src]){
        int u = x.first;
        int w = x.second;
        if(vis[u]==true) 
            continue;
        if(w>=k) 
            return true;

        if(solve(u,k-w,g,vis))
            return true;

    }
    vis[src] = false;
    return false;
}

int32_t main() {
   
    int v,e;
    cin>>v>>e;
    int k;
    cin>>k;
    vector<pair<int,int> > g[v+1];
    for(int i=0;i<e;i++){
        int x,y,w;
        cin>>x>>y>>w;
        g[x].push_back({y,w});
        g[y].push_back({x,w});
    }
    vector<bool> vis(v+1,false);
    cout<<solve(1,k,g,vis);  

    
    return 0;
}
    



