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
      int l,r;
      cin>>l>>r;
      //Correct
      // int ans = 1;
      // int st = l, dif = 1;
      // while(st+dif <= r){
      //    st += dif;
      //    dif++;
      //    ans++;
      // }
      // cout<<ans<<endl;
      int  x = r-l;
      int s = 1, e = 1e9, res = 1;
      
      auto isValid = [&](int m) -> bool{ 
         return (1LL * (m-1) * m / 2 <= x);
      };

      while(s<=e){
         int mid = (e-s)/2 + s;
         if(isValid(mid)){
            res = mid;
            s = mid +1;
         }
         else{
            e = mid-1;
         }
      }
      cout<<res<<endl;
   }
   return 0;
}