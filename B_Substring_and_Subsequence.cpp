#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int solve(string &a, string &b, int i, int j, int len, unordered_map<char, int> mp, bool flag, vector<vector<vector<int>>>& dp)
{
   if(j == b.size())
      return len;
   if(i == a.size() || (flag && mp[b[j]] == 0)){
      return len + (b.size() - j);
   }
   if(dp[i][j][flag] != -1)
      return dp[i][j][flag];
   int pick = INT_MAX, not_pick = INT_MAX;
   if(a[i] == b[j]){
      if(!flag){
         not_pick = solve(a, b, i, j + 1, len + 1, mp, flag, dp);
      }
      pick = solve(a, b, i+1, j+1, len, mp, true, dp);
      return dp[i][j][flag] = min(pick, not_pick);
   }
   if(!flag){
      if(mp[b[j]] == 0)
         pick = solve(a, b, i, j+1, len+1, mp, flag, dp);
      else{
         pick = solve(a, b, i, j + 1, len + 1, mp, flag, dp);
         not_pick = solve(a, b, i + 1, j, len, mp, flag, dp);
      }
      return dp[i][j][flag] =min(pick, not_pick);
   }
   mp[a[i]]--;
   return dp[i][j][flag] = solve(a, b, i+1, j, len, mp, flag, dp);
}
int main(){
   int t;
   cin>>t;
   while(t--){
      string a,b;
      cin>>a>>b;
      // int n = a.size(), m = b.size();
      unordered_map<char, int> mp;
      for(int i=0; i<a.size(); i++){
         mp[a[i]]++;
      }
      bool flag = false;
      vector<vector<vector<int>>> dp(a.size(), vector<vector<int>>(b.size(), vector<int> (2, -1)));
      cout<<solve(a, b, 0, 0, a.size(), mp, flag, dp)<<endl;;
      // int i = 0, j = 0, cnt = 0;
      // while(j<m && i<n){
      //    if(!flag && mp[b[j]] == 0){
      //       j++;
      //       cnt++;
      //    }
      //    else if(mp[b[j]] == 0){
      //       break;
      //    }
      //    else if(a[i] == b[j]){
      //       flag = true;
      //       mp[b[j]]--;
      //       i++;
      //       j++;
      //    }
      //    else{
      //       mp[a[i]]--;
      //       i++;
      //    }
      //    // cout<<i<<" "<<j<<endl;
      // }
      // if(j != m){
      //    cnt += (m - j);
      // }
      // int ans1 = cnt + a.size();
      // mp.clear();
      // for (int i = 0; i < n; i++)
      // {
      //    mp[a[i]]++;
      // }
      // i = n-1; j = m-1; cnt = 0;
      // flag = false;
      // while (j>=0 && i>=0)
      // {
      //    if (!flag && mp[b[j]] == 0)
      //    {
      //       j--;
      //       cnt++;
      //    }
      //    else if (mp[b[j]] == 0)
      //    {
      //       break;
      //    }
      //    else if (a[i] == b[j])
      //    {
      //       flag = true;
      //       mp[b[j]]--;
      //       i--;
      //       j--;
      //    }
      //    else
      //    {
      //       mp[a[i]]--;
      //       i++;
      //    }
         // cout<<i<<" "<<j<<endl;
      // }
   }
   return 0;
}