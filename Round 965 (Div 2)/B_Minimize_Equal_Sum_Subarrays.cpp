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
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      // for(int i=0; i<n; i++){
      //    v[i] = v[i] + 1;
      //    if(v[i] > n){
      //       v[i] = v[i]%n;
      //    }
      // }
      for(int i=1; i<n; i++){
         cout<<v[i]<<" ";
      }
      cout<<v[0]<<endl;
   }
   return 0;
}