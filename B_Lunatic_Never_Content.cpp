#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<long long> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      vector<long long> dif;
      for(int i=0; i<=n/2; i++){
         dif.push_back(abs(arr[i]-arr[n-i-1]));
      }
      long long ans = dif[0];
      for(int i=1; i<dif.size(); i++){
         ans = gcd(ans,dif[i]);
      }
      cout<<ans<<endl;
   }
   return 0;
}