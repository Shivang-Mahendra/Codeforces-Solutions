#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      if(n&1 == 0){
         cout<<n/2<<" "<<n/2<<endl;
         continue;
      }
      int p = 0; 
      for(int i=2; i<=100000; i++){
         if(n%i == 0){
            p = i;
            break;
         }
      }
      if(p == 0)
         p = n;
      cout<<n/p<<" "<<(n-n/p)<<endl;
   }
   return 0;
}