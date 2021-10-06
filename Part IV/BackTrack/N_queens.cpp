// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> ans;
    
    bool isSafe(int r , int c , vector<vector<int>> &sol){
        
        for(int i=r-1,j=c;i>=0;i--)
            if(sol[i][j]) return false;
        
        
        for(int i  = r-1 ,  j = c-1 ; i>=0 and j>=0 ; i-- , j--)
            if(sol[i][j]) return false;
            
        
        for(int i  = r-1 ,  j = c+1 ; i>=0 and j<sol[0].size() ; i-- , j++)
            if(sol[i][j]) return false;
            
        
        return true ;
    }
   bool help (int r , vector<vector<int>> &sol ){
        if(r>=sol[0].size()) {
            vector <int> temp ; 
             for(int j=0;j<sol[0].size();j++)
                for(int k=0;k<sol[0].size();k++)
                    if(sol[j][k]) 
                        temp.push_back(k+1);
                        
            ans.push_back(temp);
            return false;
        }
        
        for(int i = 0 ; i<sol[0].size() ; i++){
            if(isSafe(r,i,sol)) {
                sol[r][i] = 1;
                if(help(r+1 ,sol)) 
                    return true ;
                sol[r][i] = 0;
            }
        }
        return false ;
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
       vector<vector<int> > sol(n, vector<int>(n, 0));
       help(0,sol);
       return ans ; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends