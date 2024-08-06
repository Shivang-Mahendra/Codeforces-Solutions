#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   if(n < m){
      cout << -1;
      return 0;
   }
   if(n%m==0){
      int temp = n/2;
      if(temp%m==0 && temp*2==n){
         cout<<temp;
      }
      else{
         cout<<temp+m-(temp%m);
      }
      return 0;
   }
   else {
      int temp=0,steps=0;
      while(temp<=n){
         temp+=2;
         steps++;
      }
      if(steps%m==0){
         cout<<steps;
         return 0;
      }
      if(steps%m < steps){
         cout<<steps+m-(steps%m);
         return 0;
      }
      cout<<-1;
   }
   return 0;
}