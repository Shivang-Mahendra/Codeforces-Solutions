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
      int n,k;
      cin>>n>>k;
      vector<int> v(n), dif;
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      sort(v.begin(), v.end(), greater<>());
      for(int i=1; i<n; i+=2){
         dif.push_back(v[i-1]-v[i]);
      }
      sort(dif.begin(), dif.end(), greater<>());
      // for(auto it: v) cout<<it<<" ";
      // cout<<endl;
      int i = 0;
      while(k>0 && i<dif.size()){
         if(dif[i] <= k){
            k -= dif[i];
            dif[i] = 0;
         }
         else{
            dif[i] -= k;
            k = 0;
         }
         i++;
      }
      int ans = 0;
      for(int i=0; i<dif.size(); i++){
         ans += dif[i];
      }
      if(n&1){
         ans += v[n-1];
      }
      cout<<ans<<endl;
   }
   return 0;
}