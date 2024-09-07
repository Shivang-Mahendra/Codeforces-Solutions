#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int u,v;
   cin>>u>>v;
   int ans = 0;
   while(v > u){
      if(v%2){
         v += 1;
      }
      else{
         v /= 2;
      }
      ans++;
   }
   cout<<ans + u-v<<endl;
   return 0;
}