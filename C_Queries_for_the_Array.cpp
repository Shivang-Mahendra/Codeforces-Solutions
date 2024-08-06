#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int n = s.size(), k = 0, sorted = -1, i = 0, pos = 0, neg = 0, flag = 1;
      if(s[0] == '-'){
         cout<<"NO"<<endl;
         continue;
      }
      while(i < n){
         if('+' == s[i]){
            k++;
            if(sorted != -1)
               pos++;
         }
         else if(s[i] == '-'){
            k--;
            if(sorted != -1)
               neg++;
               if(sorted == 0){
                  pos--;
               }
         }
         else if('0' == s[i]){
            if (k < 2 || (sorted == 1 && pos <= neg)){
               flag = 0;
               break;
            }
            else if(){
               sorted = 0;
               pos = 0;
               neg = 0;
            }
         }
      }
   }
   return 0;
}