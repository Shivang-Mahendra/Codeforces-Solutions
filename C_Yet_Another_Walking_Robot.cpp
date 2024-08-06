#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;
struct PairHash
{
   template <class T1, class T2>
   std::size_t operator()(const std::pair<T1, T2> &p) const
   {
      auto h1 = std::hash<T1>{}(p.first);
      auto h2 = std::hash<T2>{}(p.second);
      // You can combine the hashes for both elements
      // using a bitwise operation like XOR (^).
      return h1 ^ h2;
   }
};
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, x = 0, y = 0, f = 0, ans = 1e9;
      pair<int, int> a;
      string s;
      cin >> n >> s;
      unordered_map<pair<int, int>, int, PairHash> m;
      m[{0, 0}] = -1;
      for (int i = 0; i < n; i++)
      {
         if (s[i] == 'L')
            x -= 1;
         else if (s[i] == 'R')
            x += 1;
         else if (s[i] == 'U')
            y += 1;
         else
            y -= 1;

         if (m[{x, y}] != 0 && ans > i + 2 - m[{x, y}])
         {
            // cout<<m[{x, y}] <<" "<< i <<endl;
            if (x == 0 && y == 0 && m[{x, y}] == -1)
            {
               ans = i + 1;
               a = {1, i + 1};
            }
            else
            {
               ans = min(ans, i + 2 - m[{x, y}]);
               a = {m[{x, y}] + 1, i + 1};
            }
            f = 1;
         }
         m[{x, y}] = i + 1;
      }
      if (f)
      {
         cout << a.first << " " << a.second << endl;
      }
      else
      {
         cout << -1 << endl;
      }
   }
   return 0;
}