#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<pair<int, int>> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i].first >> v[i].second;
      }
      int w = v[0].first, e = v[0].second;
      for (int i = 1; i < n; i++)
      {
         if (v[i].first >= w && v[i].second >= e)
         {
            w = -1;
            break;
         }
      }
      cout << w << endl;
   }
   return 0;
}