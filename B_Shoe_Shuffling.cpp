#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<long long> shoes(n);
      for (int i = 0; i < n; i++)
      {
         cin >> shoes[i];
      }
      if (n == 1)
      {
         cout << -1 << endl;
         continue;
      }
      int flag = 0;
      for(int i=1; i<n-1; i++){
         if(shoes[i] != shoes[i-1] && shoes[i] != shoes[i+1]){
            // cout<<-1<<endl;
            flag = 1;
            break;
         }
      }
      if (!flag && shoes[0] == shoes[1] && shoes[n - 1] == shoes[n - 2])
      {
         for (int i = 0; i < n; i++)
         {
            int st = i, temp = i;
            while (i < n && shoes[st] == shoes[i])
            {
               i++;
            }
            for (; st < i - 1; st++)
            {
               cout << st + 2 << " ";
            }
            cout << temp + 1 << " ";
            i--;
         }
         cout << endl;
      }
      else
      {
         cout << -1 << endl;
      }
   }
   return 0;
}