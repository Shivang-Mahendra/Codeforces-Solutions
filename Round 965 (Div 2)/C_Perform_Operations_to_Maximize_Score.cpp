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
      vector<pair<int, int>> v(n);
      for(int i=0; i<n; i++){
         int x;
         cin>>x;
         v[i] = {x, 0};
      }
      int c = 0;
      for(int i=0; i<n; i++){
         int y;
         cin>>y;
         v[i].second = y;
         if(y == 1){
            c++;
         }
      }
      sort(v.begin(), v.end());
      int times = k/c;
      k -= times*c;
      for(int i=n-1; i>=0; i--){
         if(v[i].second == 1){
            v[i].first += times;
            if(k){
               v[i].first++;
               k--;
            }
         }
      }
      sort(v.begin(), v.end());
      if(n&1){
         cout<<v.back().first+ ((v[n/2 - 1].first + v[n/2].first)/2)<<endl;
      }
      else{
         cout<<v.back().first + v[n/2 - 1].first<<endl;
      }
   }
   return 0;
}