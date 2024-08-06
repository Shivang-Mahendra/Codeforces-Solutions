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
      int n;
      cin >> n;
      vector<int> a(n);
      unordered_map<int, int> m;
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
         m[a[i]]++;
      }
      int mex;
      for (int i = 0; i <= n; i++)
      {
         if (m[i] == 0)
         {
            mex = i;
            break;
         }
      }
      // cout<<mex<<endl;
      if (m.size() == 1 || mex == 0)
      {
         cout << n << endl;
         for (int i = 1; i <= n; i++)
         {
            cout << i << " " << i << endl;
         }
      }
      else
      {
         bool f1 = true;
         vector<pair<int, int>> v;
         int i = 0;
         while (i < n)
         {
            unordered_map<int, int> mp;
            int l = i;
            while (i < n)
            {
               if (a[i] < mex)
                  mp[a[i]]++;
               i++;
               if (mp.size() == mex)
               {
                  while (i < n && a[i] > mex)
                  {
                     i++;
                  }
                  break;
               }
            }
            if (i == n && v.size() <= 1 && mp.size() != mex)
            {
               f1 = false;
               break;
            }
            if (mp.size() == mex)
               v.pb({l + 1, i});
            // cout<<l+1<<" "<<i<<endl;
         }
         if (!f1 || v.size() == 1)
            cout << -1 << endl;
         else
         {
            cout << v.size() << endl;
            // for(auto it : v)
            //    cout<<it.first<<" "<<it.second<<endl;
            for (int i = 0; i < v.size() - 1; i++)
            {
               cout << v[i].first << " " << v[i].second << endl;
            }
            cout<<v[v.size()-1].first<<" "<<n<<endl;
         }
      }
   }
   return 0;
}