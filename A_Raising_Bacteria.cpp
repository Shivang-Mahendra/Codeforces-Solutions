#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n, i = 0;
   cin >> n;
   int ans = 0;
   while ((long long)pow(2, i) <= n)
   {
      i++;
      if ((long long)pow(2, i) == n)
      {
         cout << ans + 1;
         return 0;
      }
      else if ((long long)pow(2, i) > n)
      {
         n = n - (long long)pow(2, i - 1);
         i = 0;
         ans++;
      }
   }
   cout << ans;
   return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    long long n;
//    cin >> n;
//    int ans = 0;
//    while (n)
//    {
//       if (n & 1)
//          ans++;
//       n>>= 1;
//    }
//    cout<<ans;
//    return 0;
// }