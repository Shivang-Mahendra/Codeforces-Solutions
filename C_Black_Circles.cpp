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
      int n;
      cin>>n;
      vector<pair<int, int>> v(n);
      for(int i=0; i<n; i++){
         int x,y;
         cin>>x>>y;
         v[i] = {x,y};
      }
      int xs,ys,xt,yt;
      cin>>xs>>ys>>xt>>yt;
      int dis = ((xs-xt)*(xs-xt)) + ((ys-yt)*(ys-yt));
      int f = 1;
      for(auto it:v){
         int x = it.first;
         int y = it.second;
         int d = ((x - xt) * (x - xt)) + ((y - yt) * (y - yt));
         if(d<=dis){
            f=0;
            break;
         }
      }
      if(f){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}