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
      unordered_map<int ,int> y0, y1;
      int y0s = 0, y1s = 0;
      for(int i=0; i<n; i++){
         int x,y;
         cin>>x>>y;
         if(y == 0){
            y0[x] = 1;
            y0s++;
         }
         else{
            y1[x] = 1;
            y1s++;
         }
      }
      int ans = 0;
      for(auto it : y0){
         if(y1.find(it.first) != y1.end()){
            ans += (y1s - 1) + (y0s - 1);
         }
      }
      for(auto it : y0){
         if(y1.find(it.first-1) != y1.end() && y1.find(it.first+1) != y1.end()){
            // cout << it.first << "!!"<<endl;
            ans++;
         }
      }
      // cout << ans << endl;
      for (auto it : y1){
         if (y0.find(it.first - 1) != y0.end() && y0.find(it.first + 1) != y0.end()){
            // cout<<it.first<<"!!" <<endl;
            ans++;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}