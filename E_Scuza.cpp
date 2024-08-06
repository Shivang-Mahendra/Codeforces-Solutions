#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k;
      cin>>n>>k;
      vector<long long> a(n), sub(n), ans(k);
      vector<pair<int,int>> q(k);
      for(int i=0; i<n; i++){
         cin>>a[i];
         if(i == 0){
            sub[i] = a[i]; 
         }
         else{
            sub[i] = sub[i - 1] + a[i];
         }
      }
      for(int i=0; i<k; i++){
         cin>>q[i].first;
         q[i].second = i;
      }
      sort(q.begin(), q.end());
      int j = 0;
      for(int i=0; i<k; i++){
         while(j < n && a[j] <= q[i].first){
            j++;
         }
         if(j)
            ans[q[i].second] = sub[j-1];
         else
            ans[q[i].second]  = 0;
      }
      for(int i=0; i<k; i++){
         cout<<ans[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}