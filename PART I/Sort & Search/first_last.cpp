// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(vector<int> a, int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int i;
        vector<int>arr;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(vector <int> arr, int n , int x )
{
   
    vector<int> ans(2);


     // method 1 code here
    int i=0; int j = n-1;
    while(i <= j) {
        if(arr[i] != x) {
            i++;
        }
        if(arr[j] != x) {
            j--;
        }
        if(arr[i] == x && arr[j] == x) {
            ans[0] = i; ans[1] = j;
            break;
        }
    }
    
    if(i > j) return {-1,-1};
    return ans;



 // method 2 code here
    int lo=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    int up=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    if(!binary_search(arr.begin(),arr.end(),x)){
        ans[0] = -1; ans[1] = -1;
    }
    else{
        ans[0] = lo; ans[1] = up;
    }

    return ans;
}