// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue <int> pq ; 
        int sol ;
        
        for(int i = l ; i<=r ; i++){
            pq.push(arr[i]);
            if(pq.size()>k)
                 pq.pop();
        }
        return pq.top();
        
    
    }

 int kthSmallest(int arr[], int l, int r, int k) {
      map <int,int> m ; 
        
        for(int i = l  ; i<=r ; i++){
            m[arr[i]]++;
        }
        int f = 0;
        for (auto a : m){
            f+=a.second;
            if(f>=k){
                return a.first;
            }
        }
        
    return -1;
    
    }
 int kthSmallest(int arr[], int l, int r, int k){
    //set<int> s(arr, arr + n);
    //set<int>::iterator itr = s.begin(); // s.begin() returns a pointer to first
    // element in the set
   // advance(itr, k - 1); // itr points to kth element in set
    //cout << *itr << "\n";
 
    return 0;
 }
    

  
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends