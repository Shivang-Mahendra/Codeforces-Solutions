#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      long long ans = 0;
      for(int i=0; i<=n; i++){
         long long temp = 0; 
         int maxi = 0;
         for(int j=1; j<=i; j++){
            temp += j*j;
            maxi = max(maxi, j*j);
         }
         int k = n;
         for(int j=i+1; j<=n; j++){
            temp += j * k;
            maxi = max(maxi, j*k);
            k--; 
         }
         ans = max(ans, temp-maxi);
      }
      cout<<ans<<endl;
   }
   return 0;
}