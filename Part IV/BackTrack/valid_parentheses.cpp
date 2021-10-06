#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
void solution(string s , int mn ,unordered_map<string,int>&hash , vector<string> &ans){
        if(hash[s]==1){ 
            return;
        }
        
        hash[s] = 1; 
        if(mn==0){
            if(getMin(s)==0){ 
                ans.push_back(s);
            }
            return;
        }
        
        
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]!='(' and s[i]!=')'){    
                continue;
            }
            string left = s.substr(0,i);
            string right = s.substr(i+1);
            solution(left+right , mn -1 , hash , ans) ;
        }
    }
    
    int getMin(string s){
        stack<char> st ; 
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.size()==0){
                    st.push(s[i]);
                }
                else{
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        st.push(s[i]);
                    } 
                }
            }
        }
        return st.size();
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        unordered_map<string,int> hash;
        
        int mn = getMin(s);
        solution(s , mn , hash , ans);
        
        return ans ;
    }
};


int main()
{
    string expression = "()())()";
    Solution ob;
    ob.removeInvalidParentheses(expression);
 
    return 0;
}