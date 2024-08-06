#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      ll n, k, col = 0, i, flag = 0;
      cin>>n>>k;
      if(k == 4*n-2){
         cout<<n*2<<endl;
         continue;
      }
      // for(i=1; i<2*n; i++){
      //    col += 2;
      //    if(col >= k){
      //       flag = 1;
      //       break;
      //    }
      // }
      // if(flag && k != 4*n-2)
      //    cout<<i<<endl;
      // else
         cout<<k/2 + k%2<<endl;
   }
   return 0;
}