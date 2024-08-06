#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(), v.end()
#define MOD 1000000007
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, ans = 0;
      string s;
      cin >> n >> k >> s;
      vector<int> v(n, 0);
      for (int i = 0; i < n; i++)
      {
         if (s[i] == '1')
         {
            if (i)
               v[i] = v[i - 1] + 1;
            else
               v[i] = 1;
         }
         else if (i)
            v[i] = v[i - 1];
      }
      for (int i = 0; i < n; i++)
      {
         if (s[i] == '0')
         {
            if ((i - k > 0 && v[i] - v[i - k - 1] == 0) && (i + k < n && v[i + k] - v[i] == 0))
            {
               ans++;
               i += k;
               // cout << i << endl;
            }
            else if ((i - k < 0 && v[i] == 0) && (i + k < n && v[i + k] - v[i] == 0))
            {
               ans++;
               i += k;
               // cout << i << endl;
            }
            else if ((i - k > 0 && v[i] - v[i - k -1] == 0) && (i + k >= n && v[n - 1] - v[i] == 0))
            {
               ans++;
               i += k;
               // cout << i << endl;
            }
            // else if (i - k < 0 && i + k >= n)
            // {
            //    ans++;
            //    // cout << i << endl;
            // }
         }
         else if (s[i] == '1'){
            i+=k;
         }
      }
      if(accumulate(all(v), 0) == 0 && ans == 0)
         ans++;
      cout << ans << endl;
   }
   return 0;
}