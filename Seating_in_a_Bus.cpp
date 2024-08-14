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
      for(int i=0; i<n; i++)  cin>>v[i];

      int f = 1;
      unordered_map<int, int> mp;
      mp[v[0]] = 1;
      for(int i=1; i<n; i++){
         if(mp[v[i]-1] == 0 && mp[v[i]+1] == 0){
            f=0;
            break;
         }
         mp[v[i]] = 1;
      }
      if(f){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO\n";
      }
   }
   return 0;
}