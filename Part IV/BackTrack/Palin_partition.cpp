
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
vector<vector<string>> finalRes;
vector<string> res ;
bool isPalindrome(string str , int low , int high){
    while (low < high)
        {
            if (str[low] != str[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
    
     void solve(string s, int idx){
        if(idx == s.size()){
            finalRes.push_back(res);
            return;
        }
        
        for(int i  = idx ; i<s.size() ; i++){
            
            if(isPalindrome(s , idx , i )){
                res.push_back(s.substr(idx,i-idx+1));
                solve(s, i + 1);
                res.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        solve(s,0);
        return finalRes ;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
 
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.partition(s);
    }
    return 0;
}