#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int t;
   cin>>t;
   while(t--){
      int n,m,k;
      cin>>n>>m>>k;
      if(n==1 || m == 1 || n == k){
         cout<<"NO"<<endl;
         continue;
      }
      if(n==m){
         if(k < n-1){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
         continue;
      }
      int c = 0;
      for(int i=0; i<n; i++){
         if(i%m != 0){
            c++;
         }
      }
      if(c<=k){
         cout<<"NO"<<endl;
      }
      else{
         cout<<"YES"<<endl;
      }
      // int c1 = n / m, c2 = n % m;
      // if(c2>1){
      //    c1++;
      //    if((c1*(m-1))-1 <= k){
      //       cout<<"NO"<<endl;
      //    }
      //    else{
      //       cout<<"YES"<<endl;
      //    }
      // }
      // else{
      //    if((c1*(m-1)) <= k){
      //       cout<<"NO"<<endl;
      //    }
      //    else{
      //       cout<<"YES"<<endl;
      //    }
      // }
   }
   return 0;
}