#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int count[n] ={0}; 
   string str[n];
   for (int i = 0; i < n; i++){
      cin >> str[i];
   }
   for (int i = 0; i < n; i++)
   {
      for(int j=0; j<n;j++){
         if(str[i] == str[j])
         {
            count[i]++;
         }
      }
   }
   int max = *max_element(count, count+n);
   for (int i = 0; i < n; i++)
   {
      if (max == count[i]){
         cout << str[i];
         break;
      }
   }
   return 0;
}