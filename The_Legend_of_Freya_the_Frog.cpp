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
      int x, y, k;
      cin>>x>>y>>k;
      int xm = ceil((x*1.0)/k);
      int ym = ceil((y*1.0)/k);
      if(ym >= xm){
         cout<<2*ym<<endl;
      }
      else{
         cout<<2*xm - 1<<endl;
      }
   }
   return 0;
}