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
      int n,m,k;
      cin>>n>>m>>k;
      int si;
      cin>>si;
      vector<int> v(si);
      for(int i=0; i<si; i++){
         cin>>v[i];
      }
      sort(v.begin(), v.end());
      vector<int> grid;
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            int loX = max(0ll, i-k+1); // first square's first coords it is part of
            int loY = max(0ll, j-k+1); 
            int hiX = min(i, n-k); //last square's first coords that it is part of
            int hiY = min(j, m-k);
            int cnt = (hiX-loX+1) * (hiY-loY+1);
            grid.pb(cnt);
         }
      }
      sort(grid.begin(), grid.end());
      int j = grid.size()-1;
      int ans = 0;
      for(int i=si-1; i>=0; i--){
         ans += (grid[j--] * v[i]);
      }
      cout<<ans<<endl;
   }
   return 0;
}