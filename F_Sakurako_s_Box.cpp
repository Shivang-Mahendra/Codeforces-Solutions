#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()

int modPow(int denom, int p){
   if(p == 0)  return 1%MOD;
   int a = modPow(denom, p/2);
   a = ((a%MOD) * (a%MOD))%MOD;
   if(p%2 == 1) a = ((a%MOD)*(denom%MOD))%MOD;
   return a%MOD;
}

signed main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      int sum = 0;
      for(int i=0; i<n; i++){
         cin>>v[i];
         sum = (MOD + (sum%MOD) + (v[i]%MOD))%MOD;
      }
      int tSum = 0;
      for(int i=0; i<n; i++){
         sum -= v[i];
         int temp = ((sum)%MOD * (v[i]%MOD))%MOD;
         tSum = (MOD + (tSum%MOD) + (temp%MOD)) % MOD;
      }
      int denom = (n * (n-1))/2;

      int inv_denom = modPow(denom, MOD-2);
      
      int ans = ((tSum%MOD) * (inv_denom%MOD)) % MOD;
      cout<<ans<<endl;
   }
   return 0;
}