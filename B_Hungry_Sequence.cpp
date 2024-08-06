#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, ans = 2;
   cin>>n;
   int i=0;
   // while(i<n){
   //    cout<<3*n+i<<" ";
   //    i++;
   // }
   
   while(i<n){
      bool flag = true;
      for(int j=2; j<=sqrt(ans); j++){
         if(ans%j == 0){
            flag = false;
            break;
         }
      }
      if(flag){
         cout<<ans<<" ";
         i++;
      }
      ans++;
   }
   return 0;
}