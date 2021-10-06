// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> finalRes;
    
    
     void solve(string s, int idx, string res, unordered_map<string, bool>& a){
        if(idx == s.size()){
            res.pop_back();
            finalRes.push_back(res);
            return;
        }
        
        for(int i  = idx ; i<s.size() ; i++){
            res+=s[i];
            if(a[s.substr(idx, i - idx + 1)]){
                res += ' ';
                solve(s, i + 1, res, a);
                res.pop_back();
            }
        }
        return;
    }

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        unordered_map<string , bool> x;
        for(string s: dict){
            x[s] = true;
        }
        solve(s, 0, "", x);
        return finalRes;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends