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
      int n;
      cin>>n;
      if(n&1){
         for(int i=n-1; i>0; i-=2){
            cout<<i<<" ";
         }
         for(int i=1; i<=n; i+=2){
            cout<<i<<" ";
         }
         cout<<endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
   return 0;
}