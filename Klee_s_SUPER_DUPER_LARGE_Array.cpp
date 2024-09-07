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
      int n, k;
      cin>>n>>k;
      int s = k, l = n + k - 1;
      int ls = l*(l+1)/2, ss = s*(s-1)/2;
      int ts = ls-ss;
      int ans = INT_MAX;
      while(s<=l){
         int i = (l-s)/2 + s;
         int sump = i*(i+1)/2 - ss;
         int sumn = ts - sump;
         // cout<<i<<" "<<sump<<" "<<sumn<<endl;
         ans = min(ans, abs(sump - sumn));
         if(sump == sumn){
            ans = 0;
            break;
         }
         else if(sump < sumn){
            s = i+1;
         }
         else{
            l = i-1;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}