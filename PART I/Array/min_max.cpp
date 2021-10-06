#include <bits/stdc++.h>
using namespace std; 
void solve(){
    int a  , n , mn , mx;
    cin>>n;
    for(int i = 0 ; i< n ; i++){
        cin>>a ;
        if(i==0){
            mn = a; 
            mx = a ; 
        }
        else if(a>mx){
            mx = a;
        }
        else if(a<mn){
            mn = a;
        }
    }

    cout<<mn<<" "<<mx;

}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

        int tc=1;
        while(tc--){
            solve();
        }
    return 0;
}