// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
  bool help(int start , int *a , bool *used , int k , int inprogressBucket , int targetBucket , int n){
      if(k==1){
          return true;
      }
      
      if(inprogressBucket == targetBucket){
          return help(0,a,used,k-1,0,targetBucket , n);
      }
      
      for(int i=start ; i<n ; i++ ){
          if (!used[i] ){
              
              used[i]=true;
              
              if(help(i+1,a,used,k,inprogressBucket + a[i],targetBucket , n))
                  return true;
            
               used[i]=false;
          }
    
      }
      return false ;
      
  }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         int sum = 0 ; 
         bool used[n];
         
         for(int i=0 ; i<n ; i++){
             sum+=a[i];
             used[i]=false;
         }
         
         if(k==0 or sum%k!=0){
             return false;
         }
         
         return help(0,a,used,k,0,sum/k,n);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends