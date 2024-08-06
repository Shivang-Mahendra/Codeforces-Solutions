#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      string s;
      cin >> s;
      int n = s.length(), flag = 0, pos=0,pos_0 = -1, pos_1 = -1;
      for (int i = 0; i < n; i++)
      {
         if (s[i] == '0')
            pos_0 = i;
      }
      for (int i = n - 1; i >= 0; i--)
      {
         if (s[i] == '1')
            pos_1 = i;
      }
      // if (pos_0 == -1 || pos_1 == -1)
      //    cout << "YES" << endl;
      // else
      // {
         for (int i = 0; i < pos_0; i++)
         {
            if (s[i] == '1' && s[i + 1] == '1')
            {
               pos = i+1;
               flag++;
               break;
            }
         }
         for (int i = pos; i < n; i++)
         {
            if (s[i] == '0' && s[i + 1] == '0')
            {
               flag++;
               break;
            }
         }
         if (flag == 2)
         {
            cout << "NO" << endl;
         }
         else
         {
            cout << "YES" << endl;
         }
      // }
   }
   return 0;
}