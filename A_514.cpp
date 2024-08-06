#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin >> s;
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i] >= '5')
      {
         if (i == 0 && s[i] == '9')
            continue;
         else
            s[i] = ('9' - s[i]) + '0';
      }
   }
   cout << s << endl;
   return 0;
}