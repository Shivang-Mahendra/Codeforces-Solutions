#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   string t;
   string str="";
   cin>>n>>t;
   if(n==1 && t=="10"){
      cout<<-1;
      return 0;
   }
   if(t=="10"){
      while(n-2){
         str+="1";
         n--;
      }
      str+="10";
      cout<<str;
      return 0;
   }
   while(n--){
      str+=t;
   }
   cout<<str;
   return 0;
}