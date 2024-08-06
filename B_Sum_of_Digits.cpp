#include<bits/stdc++.h>
using namespace std;

int main(){
   string str;
   cin>>str;
   if(str.length()==1){
      cout<<0;
   }
   else{
      int count = 0, n = str.length();
      while(n!=1){
         int sum = 0;
         for(int i=0; i<n; i++){
            sum += str[i]-'0';
         }
         str = to_string(sum); 
         n = str.length();
         count++; 
      }
      cout<<count<<endl;
   }
   return 0;
}