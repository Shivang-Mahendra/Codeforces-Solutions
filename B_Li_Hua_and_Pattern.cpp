#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long n, k, count = 0;
      cin >> n >> k;
      int arr[n][n], arr_180[n][n];
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            cin >> arr[i][j];
         }
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            arr_180[n - 1 - i][n - 1 - j] = arr[i][j];
         }
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (arr[i][j] != arr_180[i][j])
            {
               count++;
            }
         }
      }
      if(n%2 == 0){
         if ((count / 2) <= k && ((k-(count/2))%2 == 0))
         {
            cout << "YES" << endl;
         }
         else
         {
            cout << "NO" << endl;
         }
      }
      else{
         if ((count / 2) <= k)
         {
            cout << "YES" << endl;
         }
         else
         {
            cout << "NO" << endl;
         }
      }
   }
   return 0;
}