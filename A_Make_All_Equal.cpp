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
      unordered_map<int, int> mp;
      for(int i=0; i<n; i++)  mp[v[i]]++;
      int mx = 0;
      for(auto it:mp)
         mx = max(mx, it.second);
      cout<<n-mx<<endl;
   }
   return 0;
}