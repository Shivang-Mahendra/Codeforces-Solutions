#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n == 1 || n == 2){
      cout<<1<<endl;
   }
   else
      cout<<2<<endl;   
   for(int i = 2; i<=n+1; i++){
      int f = 0;
      for(int j=2; j<=sqrt(i); j++){
         if(i%j == 0){
            f=1;
            break;
         }
      }
      if(f){
         cout<<2<<" ";
      }
      else{
         cout<<1<<" ";
      }
   }
   return 0;
}