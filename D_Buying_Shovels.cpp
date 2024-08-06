#include<bits/stdc++.h>
using namespace std;
#define ll long long
// bool isPrime(ll n){
//    ll ti = sqrt(n);
//    for(ll i=2; i<=ti; i++){
//       if(n % i == 0)
//          return false;
//    }
//    return true;
// }
int main(){
   int t;
   cin>>t;
   while(t--){
      ll n, k;
      cin>>n>>k;
      ll ans = n;
      if(n <= k){
         cout << 1 << endl;
         continue;
      }
      if(k == 1){
         cout << n << endl;
         continue;
      }
      // cout<<(ll)sqrt(n)<<endl;
      ll li = min((ll)sqrt(n), k);
      for(ll i=2; i<=li; i++){
         if(n%i == 0){
            // cout<<i<<" "<<n/i<<endl;
            ans = min(ans, n/i);
            if(n/i <= k){
               ans = min(ans, i);
            }
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}