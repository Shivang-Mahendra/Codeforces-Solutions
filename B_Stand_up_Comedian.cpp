#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      vector<long long> a(4);
      for(int i=0; i<4; i++){
         cin>>a[i];
      }
      if(a[0] == 0){
         cout<<1<<endl;
         continue;
      }
      long long ans = a[0], alice = a[0], bob = a[0];
      if(a[1] == 0 && a[2] == 0){
         if(a[3]){
            ans += min(ans, a[3]);
            if(ans < accumulate(a.begin(), a.end(), 0))
               ans++;
         }
         cout<<ans<<endl;
         continue;
      }
      if(a[1] < a[2]){
         ans += a[1];
         alice += a[1];
         bob -= a[1];
         ans += min(alice, a[2]);
         bob += min(a[2], alice);
         alice -= min(alice, a[2]);
      }
      else{
         ans += a[2];
         bob += a[2];
         alice -= a[2];
         ans += min(bob, a[1]);
         alice += min(bob, a[1]);
         bob -= min(a[1], bob);
      }
      if(ans < accumulate(a.begin(), a.end(), 0)){
         ans += min(a[3], min(alice, bob));
         if (ans < accumulate(a.begin(), a.end(), 0))
            ans++;
      }
         cout << ans << endl;
   }
   return 0;
}