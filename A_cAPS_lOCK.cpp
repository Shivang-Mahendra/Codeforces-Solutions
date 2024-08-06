#include<bits/stdc++.h>
using namespace std;
int main(){
   string str,str1;
   cin>>str;
   str1=str;
   int n=str.length(),caps=0;
   for(int i=0; i<n; i++){
      if(str[i]>=65 && str[i]<=90){
         caps++;
         str1[i]+=32;
      }
      else {
         str1[i]-=32;
      }
   }
   if(caps==n || (caps==n-1 && str[0]>=97 && str[0]<=122))
      cout<<str1;
   else
      cout<<str;
   return 0;
}