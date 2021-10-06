// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    vector<string>  res;
		
		void help(string str , int l , int r){
		    if(l==r)
		    {
		        res.push_back(str);
		        return ;
		    }
		    
		    for(int i = l ; i<=r ; i++){
		        swap(str[i],str[l]);
		        
		        help(str,l+1,r);
		        
		        swap(str[i],str[l]);
		    }
		}
		
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    help(S,0,S.size()-1);
		    sort(res.begin(), res.end());
		    return res;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends