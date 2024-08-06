#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,k;
      cin>>n>>k;
      long long ans = 0, li = n/k;
      vector<long long> dig(10);
      for(int i=0; i<10; i++){
         dig[i] = ((i+1)*k) % 10;
      }
      for(int i=0; i < li%10; i++){
         ans += dig[i];
      }
      cout<<ans + (li/10 * accumulate(dig.begin(), dig.end(), 0LL))<<endl;
   }
   return 0;
}