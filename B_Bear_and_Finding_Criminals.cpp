#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, l, count = 0;
   cin >> n >> l;
   vector<int> city(n);
   for (int i = 0; i < n; i++)
   {
      cin >> city[i];
   }
   l--;
   int i = l - 1, j = l + 1;
   if (city[l] != 0)
      count++;
   while (i >= 0 && j <= n - 1)
   {
      if (city[i] != 0 && city[j] != 0)
      {
         count += 2;
      }
      i--;
      j++;
   }
   while (i >= 0)
   {
      if (city[i] != 0)
      {
         count++;
      }
      i--;
   }
   while (j < n)
   {
      if (city[j] != 0)
      {
         count++;
      }
      j++;
   }
   cout << count;
   return 0;
}