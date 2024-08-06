#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int n = s.size(), count = 0;
   for(int i=0; i<n/2; i++){
      if(s[i] != s[n-1-i]){
         count++;
      }
      if(count == 2){
         break;
      }
   }
   if(count == 1 || (count == 0 && n&1 == 1)){
      cout << "YES" << endl; 
   }
   else{
      cout << "NO" << endl;
   }
   return 0;
}