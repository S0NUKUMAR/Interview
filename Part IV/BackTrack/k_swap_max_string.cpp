// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    string res;
    //Function to find the largest number after k swaps.
    void help(string str , int k , int idx){
        if(k==0) return ; 
        
        char temp = str[idx];
        for(int i = idx+1 ; i<str.size() ; i++){
            if(temp<str[i])
            temp = str[i];
        }
        
        if(temp!=str[idx])k--;
        
        for(int j = str.size() -1 ; j>=idx ; j--){
            if(str[j]==temp){
                swap(str[idx],str[j]);
                if(res<str) res=str;
                help(str,k,idx+1);
                swap(str[idx],str[j]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       help(str,k,0);
       return res ;
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends