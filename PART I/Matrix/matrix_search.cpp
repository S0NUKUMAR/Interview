
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix[0].size()-1;
        while(i < matrix.size() && j >= 0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                 j--;
            }
            else{
                i++;
            }
        }
        return false ;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        int target ; 
       
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }
        cin>>target;

        Solution ob;

        bool result = ob.searchMatrix(matrix, target);
        cout<<result<<endl;
    }
    return 0;
}  // } Driver Code Ends