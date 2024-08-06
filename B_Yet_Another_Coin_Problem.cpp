#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
// int dp(vector<int> coins, int ind, int n){
//    if (n == 0)
//       return 0;
//    if(ind == 5 || n < 0) return INT_MAX;
//    // int pick = n/coins[ind] + dp(coins, ind+1, n%coins[ind]);
//    int pick = n-coins[ind] + dp(coins, ind, n - coins[ind]);
//    int notPick = dp(coins, ind+1, n);

//    // cout << ((pick < notPick) ? pick : notPick) << " "<< ind<<endl;
//    return (pick < notPick) ? pick : notPick;
// }

int solve(vector<int> &nums, int indx, int target)
{
   if (indx == 0)
   {
      if (target % nums[0])
         return 1e9;
      if (target % nums[0] == 0)
      {
         return target / nums[0];
      }
   }
   // if (dp[indx][target] != -1)
   //    return dp[indx][target];
   int nTake = solve(nums, indx - 1, target);
   int take = INT_MAX;
   if (target >= nums[indx])
      take = 1 + solve(nums, indx, target - nums[indx]);
   // return dp[indx][target] = min(take, nTake);
   return min(nTake, take);
}
int coinChange(vector<int> &nums, int amount)
{
   int n = nums.size();
   // vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
   // int x = solve(nums, n - 1, amount, dp);
   int x = solve(nums, n-1, amount);
   if (x == 1e9)
      return -1;
   return x;
}

signed main(){
   int t;
   cin>>t;
   while(t--){
      int n, ans = 0;
      cin>>n;
      // vector<vector<int>> dpv(5, vector<int> (n+1, -1));
      vector<int> coins = {15, 10, 6, 3, 1};
      // ans = dp(coins, 0, n);
      ans = coinChange(coins, n);
      cout<<ans<<endl;
   }
   return 0;
}