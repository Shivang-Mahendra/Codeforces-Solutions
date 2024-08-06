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
      int n,a,b;
      cin>>n>>a>>b;
      if(2*a <= b){
         cout<<n*a<<endl;
      }
      else{
         if(n%2){
            cout<<(n/2)*b + a<<endl;;
         }
         else  cout<<(n/2)*b<<endl;;
      }
   }
   return 0;
}