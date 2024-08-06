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
      int t;
      cin>>t;
      while(t--){
         ll n,x;
         cin>>n>>x;
         ll ans = 0;
         vector<ll> v(n);
         for(int i=0; i<n; i++){
            cin>>v[i];
         }
         for(int i=0; i<n; i++){
            ll g = 0;
            for(int j=i; j<n; j++){
               if(g+v[j] <= x){
                  ans++;
                  g += v[j];
               }
               else{
                  g = 0;
               }
            }
         }
         cout<<ans<<endl;
      }
   }
   return 0;
}