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
      int x, y;
      cin>>x>>y;
      int ans = 0;
      while(y > 1){
         y -= 2;
         x -= 7;
         ans++;
      }
      if(y == 1){
         y = 0;
         x -= 11;
         ans++;
      }
      while(x > 0){
         x -= 15;
         ans++;
      }
      cout<<ans<<endl;
   }
   return 0;
}