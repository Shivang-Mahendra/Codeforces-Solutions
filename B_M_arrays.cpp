#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, m;
      cin >> n >> m;
      unordered_map<int , int> ma;
      for(int i = 0; i < n; i++){
         int x;
         cin>>x;
         ma[x % m]++;
      }
      int ans = 0L;
      for(auto it : ma){
         if(it.first == 0)
            ans++;
         else if (2 * it.first == m)
            ans++;
         else if (2 * it.first < m || ma.find(m - it.first) == ma.end()){
            int x = it.second, y = ma[m - it.first];
            ans += 1 + max(0, abs(x - y) - 1);
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}