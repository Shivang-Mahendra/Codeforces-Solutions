#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin >> str;
   transform(str.begin(), str.end(), str.begin(), ::tolower);
   int n = str.length();
   for (int i = 0; i < n; i++)
   {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
      {
         str.erase(i, 1);
         i--;
      }
   }
   for (int i = 0; i < str.length(); i+=2)
   {
      str.insert(i,".");
   }

   cout << str << endl;
   return 0;
}