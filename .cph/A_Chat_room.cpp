#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin >> str;
   int n = str.length(), flag = 0;
   for (int i = 0; i < n - 1; i++)
   {
      if (str[i]=='h' && find(str.begin()+i+1, str.end(), "e") != str.end() && flag==0){
         flag++;
         i = find(str.begin() + i + 1, str.end(), "e") - str.begin();
      }
      else if (str[i] == 'e' && find(str.begin() + i + 1, str.end(), "l")!=str.end() && flag == 1){
         flag++;
         i = find(str.begin() + i + 1, str.end(), "l") - str.begin(); 
      }
      else if(str[i]=='l' && str[i+1]=='l' &&flag==2)
         flag++;
      else if(str[i]=='l' && str[i+1]=='o' && flag==3)
         flag++;
      if(flag==4){
         cout<<"YES"<<endl;
         return 0;
      }
   }
   cout<<"NO"<<endl;
   return 0;
}