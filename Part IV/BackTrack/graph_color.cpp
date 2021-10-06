// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.

bool isSafe(bool graph[101][101], int m , int ver ,int V, int color[]){
    for(int i = 0 ; i<V ; i++){
        if(graph[ver][i] and color[i]==m)
        return false ; 
    }
    return true ;
}

bool help(bool graph[101][101], int m , int ver , int V, int color[]){
    if(ver==V){
        return true;
    }
    
    
    for(int i = 1 ; i<= m ; i++){
        if(isSafe(graph , i , ver , V , color)){
            color[ver] = i ; 
            if(help(graph , m , ver+1 ,  V, color)) return true ; 
            color[ver] = 0 ;
        }
    }
    return false ;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    // your code here
    int color[V];
    for(int i  = 0 ; i < V ; i++){
        color[i] = 0;
    }
    
    if(help(graph , m , 0 , V , color)) return true ; 
    
    return false ; 
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends