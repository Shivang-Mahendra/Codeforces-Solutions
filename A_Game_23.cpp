#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   if(m%n != 0){
      cout<<-1<<endl;
   }
   else{
      int count=0,q=m/n;
      while(q%2 == 0){
         count++;
         q/=2;
      }
      while(q%3 == 0){
         count++;
         q/=3;
      }
      if(q == 1){
         cout<<count<<endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
   return 0;
}