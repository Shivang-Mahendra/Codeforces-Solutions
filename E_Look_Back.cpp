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
      ll n, ans = 0LL, curr = 0;
      cin>>n;
      vector<ll> v(n);
      for(int i=0; i<n; i++) cin>>v[i];
      for(int i=1; i<n; i++){
         ll val = v[i];
         while(curr && val >= 2*v[i-1]){
            val /= 2;
            curr--;
         }
         while(val < v[i-1]){
            curr++;
            val *= 2;
         }
         ans += curr;
      }
      cout<<ans<<endl;
   }
   return 0;
}