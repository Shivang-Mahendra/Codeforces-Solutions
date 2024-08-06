#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long n;
      cin >> n;
      if (n == 2 || n == 4)
      {
         cout << "YES" << endl;
         continue;
      }
      if (n % 2 == 0)
      {
         int num = n / 2;
         int temp = sqrt(num);
         if (num == temp * temp)
         {
            cout << "YES" << endl;
            continue;
         }
      }
      if (n % 4 == 0)
      {
         int num = n / 4;
         int temp = sqrt(num);
         if (temp * temp == num)
         {
            cout << "YES" << endl;
            continue;
         }
      }
      cout << "NO" << endl;
   }
   return 0;
}