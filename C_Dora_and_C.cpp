#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int unsigned long long
#define all(v) v.begin(), v.end()
#define MOD 1000000007
signed main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, a, b;
      cin >> n >> a >> b;
      int gcd = __gcd(a, b);
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
         v[i] %= gcd;
      }
      sort(v.begin(), v.end());
      int ans =v[n-1] - v[0];
      for(int i=0; i<n-1; i++){
         ans = min(ans, v[i] + gcd - v[i+1]);
      }
      cout << ans << endl;
   }
   return 0;
}