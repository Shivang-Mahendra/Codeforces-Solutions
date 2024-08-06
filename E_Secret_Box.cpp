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
      int x, y, z, k;
      cin>>x>>y>>z>>k;
      int count = 0;
      for(int i=0; i<=x; i++){
         for(int j=0; j<=y; j++){
            for(int l=0; l<=z; l++){
               if(((x-i)*(y-j)*(z-l)) >= k){
                  count++;
                  cout<<i<<" "<<j<<" "<<l<<endl;
               }
            }
         }
      }
      cout<<count<<endl;
   }
   return 0;
}