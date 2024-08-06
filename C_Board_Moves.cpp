#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,ans=0;
      cin>>n;
      if(n==1){
         cout<<0<<endl;
         continue;
      }
      for(long long i=1; i<=n/2;i++){
         ans += (8*i*i);
      }
      cout<<ans<<endl;
   }
   return 0;
}