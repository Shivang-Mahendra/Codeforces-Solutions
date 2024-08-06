#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int sum = 0, len = s.length();
      if(len == 1){
         if(s[0] == '^')
            cout << 1 << endl;
         else
            cout<< 2 << endl;
         continue;
      }
      if(s[0] == '_'){
         sum++;
      }
      for(int i=0; i<len; i++){
         if(s[i] =='_' && s[i+1] == '_'){
            sum++;
         }
         else if(s[i] =='_' && i+1 == len){
            sum++;
         }
      }
      cout<< sum << endl; 
   }
   return 0;
}