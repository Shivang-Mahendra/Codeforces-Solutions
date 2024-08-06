#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n;
      cin>>n;
      vector<long long> a(n), dp(n+1, -1);
      for(int i=0;i<n; i++){
         cin>>a[i];
      }
      dp[n] = 0;
      for(int i=n-1; i>=0; i--){
         // if(a[i] <= n - 1 - i){
            long long temp = LLONG_MAX;
            if (i + a[i] + 1 < n)
               temp = dp[i + a[i] + 1]; 
            else if(i + a[i] + 1 == n)
               temp = 0L;
            dp[i] = min(dp[i+1] + 1, temp);
         // }
         // else if(i + 1 < n){
         //    dp[i] = dp[i + 1];
         // }
      }
      // for(int i=0; i<n; i++){
      //    cout<<b[i]<<" ";
      // }
      // int ans = *min_element(dp.begin(), dp.end());
      // cout << ((ans == INT_MAX)? n : ans) << endl;
      cout<<dp[0]<<endl;
   }
   return 0;
}