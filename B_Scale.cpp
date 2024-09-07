#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int t;
   cin>>t;
   while(t--){
      int n, k;
      cin>>n>>k;
      vector<vector<char>> v(n, vector<char>(n));
      for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            cin>>v[i][j];
         }
      }
      for(int i=0; i<n; i+=k){
         for(int j=0; j<n; j+=k){
            cout<<v[i][j];
         }
         cout<<endl;
      } 
   }
   return 0;
}