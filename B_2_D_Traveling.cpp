#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k, a, b;
      cin>>n>>k>>a>>b;
      vector<pair<ll, ll>> v(n+1);
      for (int i = 1; i <= n; i++){
         cin >> v[i].first >> v[i].second;
      }
      if(a <= k && b <= k){
         cout<<0<<endl;
         continue;
      }
      ll ans = abs(v[a].first - v[b].first) + abs(v[a].second - v[b].second);
      ll min1 = LLONG_MAX/2, min2 = LLONG_MAX/2;
      for(int i=1; i<=k; i++){
         min1 = min(min1, (abs(v[a].first - v[i].first)+abs(v[a].second - v[i].second)));
         min2 = min(min2, (abs(v[b].first - v[i].first) + abs(v[b].second - v[i].second)));
      } 
      ans = min(ans, min1+min2);
      cout<<ans<<endl;
   }
   return 0;
}