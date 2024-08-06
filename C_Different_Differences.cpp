#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, i = 1, j = 1;
      cin >> k >> n;
      set<int> ans;
      while (i <= n && ans.size() < k)
      {
         ans.insert(i);
         i += j;
         j++;
      }
      // auto it = ans.end();
      // it--;
      // i = *it;
      i=n;
      while (i > 0 && ans.size() < k)
      {
         ans.insert(i);
         i--;
      }
      // i = 1;
      // while (i <= n && ans.size() < k)
      // {
      //    ans.insert(i);
      //    i++;
      // }
      for (auto it = ans.begin(); it != ans.end(); it++)
      {
         cout << *it << " ";
      }
      cout << endl;
   }
   return 0;
}