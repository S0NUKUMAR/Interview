// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> v;
        int xr = 0 ;
        int num1 =0 ; 
        int num2 = 0 ;
        for(auto a : nums){
            xr^=a;
        }
        
        int set_bit = xr & ~(xr-1);
        
        for(auto a : nums){
            if(a & set_bit){
                num1^=a;
            }
            else {
                num2^=a;
            }
        }
        
        v.push_back(num1);
        v.push_back(num2);
        sort(v.begin() , v.end());
        
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends