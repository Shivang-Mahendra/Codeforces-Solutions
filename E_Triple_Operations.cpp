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
      int l, r;
      cin>>l>>r;
      int ans = 0;
      double l3 = log2(3);
      if(r < 3){
         cout<<3<<endl;
         continue;
      }
      if(l < 3){
         ans++;
         ans += (log2((l+1)*3)/l3) + 1;
      }
      else{
         ans += (log2(l)/l3) + 1;
         ans += (log2((l+1) * pow(3, ans))/l3) + 1;
      }
      // cout<<ans<<endl;
      int p = (log2(l+2)/l3);
      int pw = pow(3, p+1);
      for(int i=l+2; i<=r; i++){
         // ans += (log2(i)/l3) + 1;
         if(i < pw){
            ans += p +1;
         }
         else{
            p++;
            ans += p + 1;
            pw *= 3;
         }
         // cout<<log(27)<<endl;
         // cout<<i<<" "<<ans<<endl;
      }
      cout<<ans<<endl;
   }
   return 0;
}