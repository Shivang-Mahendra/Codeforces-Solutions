#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, m;
      cin>>n;
      vector<pair<int, int>> a;
      for(int i=0; i<n; i++){
         cin>>m;
         vector<int> temp(m);
         for(int j=0; j<m; j++){
            cin>>temp[j];
         }
         sort(temp.begin(), temp.end());
         a.push_back({temp[1], temp[0]});
      }
      sort(a.begin(), a.end());
      long long ans = 0;
      int mini = INT_MAX;
      for(int i=n-1; i>0; i--){
         ans += a[i].first;
         if(mini > a[i].second)
            mini = a[i].second;
      }
      ans += min(mini,a[0].second);
      cout<<ans<<endl;
   }
   return 0;
}