#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      vector<ll> v(n), prf(n+1, 0);
      for(int i=0; i<n; i++)
         cin>>v[i];
      // if(n == 1){
      //    cout<<max(v[0],0)<<endl;
      //    continue;
      // }
      prf[n-1] = max(v[n-1],0LL);
      for(int i=n-2; i>=0; i--){
         prf[i] = prf[i+1] + max(0LL, v[i]);
      }
      ll ans = 0;
      for(int i=0; i<n; i++){
         ans = max(ans, (((i+1)%2 == 1) ? v[i] : 0) + prf[i+1]);
      }
      cout<<ans<<endl;
   }
   return 0;
}