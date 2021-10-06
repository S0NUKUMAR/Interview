
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> v ;
        int minc=0;
        int maxc=c-1;
        int minr=0;
        int maxr=r-1;
        int tn=0;
        while(tn<r*c)
        {
            for(int i = minc , j=minr; i<=maxc and tn<r*c ; i++)
            {
            v.push_back(matrix[j][i]);
            tn++; 
            }
            
            
            minr++;
            
            for(int i = minr , j=maxc; i<=maxr and tn<r*c; i++)
            {
            v.push_back(matrix[i][j]);
            tn++; 
            }
            
            maxc--;
            
            for(int i = maxc , j=maxr; i>=minc and tn<r*c; i--)
            {
            v.push_back(matrix[j][i]);
            tn++; 
            }
            
            maxr--;
            
            for(int i = maxr , j=minc; i>=minr and tn<r*c ; i--)
            {
            v.push_back(matrix[i][j]);
            tn++; 
            }
            
            minc++;
            
        }
        
        return v;
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
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends