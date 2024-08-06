#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int n = s.size(), coins1 = 0, coins2 = 0;
      int a = 0, b = 0;
      for(int i=0; i<n;){
         while(i<n && s[i] == 'A'){
            a++;
            i++;
         }
         while(i<n && s[i] == 'B'){
            b++;
            if(a != 0){
               coins1 += a;
               a = 0;
               b--;
            }
            i++;
         }
      }
      if( a!= 0 && b != 0)
         coins1 += a;
      // cout <<coins1 << endl;
      a = 0; b = 0;
      for (int i = n-1; i >= 0;)
      {
         while (i >= 0 && s[i] == 'A')
         {
            a++;
            i--;
         }
         while (i >= 0 && s[i] == 'B')
         {
            b++;
            if (a != 0)
            {
               coins2 += a;
               a = 0;
               b--;
            }
            i--;
         }
      }
      if (a != 0 && b != 0)
         coins2 += a;
      cout<<max(coins2,coins1)<<endl;
   }
   return 0;
}