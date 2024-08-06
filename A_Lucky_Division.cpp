#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n<4){
      cout<<"NO";
      return 0;
   }
   int temp = n, flag=1;
   while(temp && flag){
      if(temp%10 !=4 && temp%10 != 7)
         flag=0;
      temp/=10;
   }
   if(flag){
      cout<<"YES";
      return 0;
   }
   if(n%4 == 0 || n%7 == 0 || n%47 == 0){
      cout<<"YES";
      return 0;
   }
   cout<<"NO";
   return 0;
}