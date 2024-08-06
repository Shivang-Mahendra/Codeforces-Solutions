#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,flag=0;
   cin >> n;
   char ch[n][n];
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cin >> ch[i][j];
      }
   }
   char di = ch[0][0], ot = ch[0][1];
   if(di == ot){
      cout << "NO" << endl;
      return 0;
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         if(i == j || j+i == n-1){
            if(ch[i][j] != di){
               flag = 1;
               break;
            }
            // cout << "di" << endl;
         }
         else{
            if (ch[i][j] != ot){
               flag = 1;
               break;
            }
         }
      }
      if(flag){
         break;
      }
   }
   if(!flag){
      cout << "YES" << endl;
   }
   else{
      cout << "NO" << endl;
   }
   return 0;
}