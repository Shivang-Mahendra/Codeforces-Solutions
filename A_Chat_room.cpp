#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str,str1="hello";
   cin >> str;
   int n = str.length(), j=0;
   for(int i=0; i<n; i++){
      if(str[i] == str1[j]){
         j++;
      }
      if (j == 5){
         cout<<"YES"<<endl;
         return 0;
      }
   }
   cout<<"NO"<<endl;
   return 0;
}