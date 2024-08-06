#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,count=0,hours=0;
   cin>>a>>b;
   while(a--){
      count++;
      hours++;
      if(count==b){
         count=0;
         a++;
      }
   }
   cout<<hours;
   return 0;
}