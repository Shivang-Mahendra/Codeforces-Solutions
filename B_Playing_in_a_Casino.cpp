#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, m, x;
      long long sum = 0;
      cin >> n >> m;
      vector<int> card[m];
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            cin >> x;
            card[j].push_back(x);
         }
      }
      for (int i = 0; i < m; i++)
      {
         sort(card[i].begin(), card[i].end());
      }
      for (int i = 0; i < m; i++)
      {
         vector<long long> temp(n, 0);
         temp[0] = card[i][0];
         for (int j = 1; j < n; j++)
         {
            temp[j] = temp[j - 1] + card[i][j];
         }
         long long curr_sum;
         for (int j = 0; j < n - 1; j++)
         {
            curr_sum = temp[n - 1] - ((n - j) * card[i][j]);
            if (j > 0)
            {
               curr_sum -= temp[j - 1];
            }
            sum += curr_sum;
         }
      }
      cout << sum << endl;
   }
   return 0;
}