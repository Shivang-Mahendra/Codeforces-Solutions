#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int l, r, min = 0, mindiff = 10, n;
      cin >> l >> r;
      for (int i = r; i >= l; i--)
      {
         vector<int> temp;
         n = i;
         while (n)
         {
            temp.push_back(n % 10);
            n /= 10;
         }
         if (mindiff >= (*max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end())))
         {
            min = i;
            mindiff = (*max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end()));
         }
         if (mindiff == 0)
         {
            break;
         }
      }
      cout << min << endl;
   }
   return 0;
}