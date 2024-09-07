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
      string s;
      cin>>s;
      if(n == 1){
         cout<<1<<endl;
         continue;
      }
      if(n%2 == 0){
         int ans = 0, mx1 = 0, mx2 = 0;
         vector<int> ei(26, 0), oi(26, 0);
         for(int i=0; i<n; i++){
            if(i%2 == 0){
               ei[s[i]-'a']++;
               mx1 = max(mx1, ei[s[i] - 'a']);
            }
            else{
               oi[s[i]-'a']++;
               mx2 = max(mx2, oi[s[i] - 'a']);
            }
         }
         // cout<<mx1<<" "<<mx2<<endl;
         ans += ((n / 2) - mx1);
         ans += ((n / 2) - mx2);
         cout<<ans<<endl;
      }
      else{
         //T.c. -> O(n*n)
         // int ans = INT_MAX;
         // for(int j=0; j<n; j++){
         //    int res = 1, f = 0, mx1 = 0, mx2 = 0;
         //    vector<int> ei(26, 0), oi(26, 0);
         //    for (int i = 0; i < n; i++){
         //       if(j == i){
         //          f = 1;
         //          continue;
         //       }
         //       if ((!f && i % 2 == 0) || (f && i%2 != 0)){
         //          ei[s[i]-'a']++;
         //          mx1 = max(mx1, ei[s[i]-'a']);
         //       }
         //       else{
         //          oi[s[i] - 'a']++;
         //          mx2 = max(mx2, oi[s[i] - 'a']);
         //       }
         //    }
         //    res += ((n / 2) - mx1);
         //    res += ((n / 2) - mx2);
         //    ans = min(ans, res);
         // }
         // cout<<ans<<endl;

         //T.C. -> O(n * 26)
         vector<vector<int>> prefixEven(n, vector<int>(26, 0));
         vector<vector<int>> prefixOdd(n, vector<int>(26, 0));
         vector<vector<int>> suffixEven(n, vector<int>(26, 0));
         vector<vector<int>> suffixOdd(n, vector<int>(26, 0));
         for(int i=0; i<n; i++){
            if(i%2 == 0){
               prefixEven[i][s[i]-'a']++;
               suffixEven[i][s[i]-'a']++;
            }
            else{
               prefixOdd[i][s[i]-'a']++;
               suffixOdd[i][s[i]-'a']++;
            }
         }
         for(int j=0; j<26; j++){
            for(int i=1; i<n; i++){
               prefixEven[i][j] += prefixEven[i-1][j];
               prefixOdd[i][j] += prefixOdd[i-1][j];
            }
            for(int i=n-2; i>=0; i--){
               suffixEven[i][j] += suffixEven[i+1][j];
               suffixOdd[i][j] += suffixOdd[i+1][j];
            }
         }
         int ans = INT_MAX;
         for(int i=0; i<n; i++){
            if(i==0){
               int mx1 = 0, mx2 = 0;
               for(int j=0; j<26; j++){
                  mx1 = max(mx1, suffixEven[i+1][j]);
                  mx2 = max(mx2, suffixOdd[i+1][j]);
               }
               ans = min(ans, n-mx1-mx2);
            }
            else if(i == n-1){
               int mx1 = 0, mx2 = 0;
               for (int j = 0; j < 26; j++){
                  mx1 = max(mx1, prefixEven[i-1][j]);
                  mx2 = max(mx2, prefixOdd[i-1][j]);
               }
               ans = min(ans, n - mx1 - mx2);
            }
            else{
               int mx1 = 0, mx2 = 0;
               for (int j = 0; j < 26; j++)
               {
                  mx1 = max(mx1, prefixEven[i - 1][j]+suffixOdd[i+1][j]);
                  mx2 = max(mx2, prefixOdd[i - 1][j]+suffixEven[i+1][j]);
               }
               ans = min(ans, n - mx1 - mx2);
            }
         }
         cout<<ans<<endl;
      }
   }
   return 0;
}