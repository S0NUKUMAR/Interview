#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool cmp (pair<int,int> v1 , pair<int,int> v2){
        return v1.second<v2.second;
    }
    int maxMeetings(int s[], int e[], int n)
    {
       vector<pair<int,int>>a;
       for(int i = 0 ; i<n ; i++){
           a.push_back({s[i],e[i]});
       }
        sort(a.begin(),a.end(),cmp);
        int j = 0;
        int count = 1;
        for(int i = 1 ; i< n ; i++){
            if(a[i].first>a[j].second){
                count++;
                j = i;
            }
        }
        return count;    
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends