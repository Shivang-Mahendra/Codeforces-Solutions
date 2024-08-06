#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   sort(arr.begin(), arr.end());
   int days = 1;
   for (int i = 0; i < n; i++)
   {
      while (i < n && arr[i] < days)
      {
         i++;
      }
      if (i == n)
      {
         break;
      }
      days++;
   }
   cout << days-1 << endl;
   return 0;
}