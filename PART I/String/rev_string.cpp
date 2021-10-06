#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    void reverseString(vector<char>& s , int n ) {
        int n = s.size()-1;
        int i = 0;
        
        while(i<=n){
            swap(s[i++],s[n--]);
        }
        
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        vector<char> s; 
        int n ; 
        cin>>n ;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        Solution ob;
        
        for (int i = 0; i < s.size(); ++i)
                cout<<s[i]<<" ";
        cout<<endl;
    }
    return 0;
}  