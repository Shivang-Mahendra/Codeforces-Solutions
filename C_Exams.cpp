#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int n;
   cin>>n;
   vector<pair<int, int>> v(n);
   for(int i=0; i<n; i++){
      int a,b;
      cin>>a>>b;
      v[i] = {a,b};
   }
   sort(all(v));
   int ans = 0;
   for(int i=0; i<n; i++){
      if(ans <= v[i].second){
         ans = v[i].second;
      }
      else{
         ans = v[i].first;
      }
   }
   cout<<ans<<endl;
   return 0;
}