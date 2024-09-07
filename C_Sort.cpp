#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int T;
   cin>>T;
   while(T--){
      int n, q;
      cin>>n>>q;
      string s,t;
      cin>>s>>t;
      vector<vector<int>> vs(n, vector<int> (26,0)), vt(n, vector<int> (26,0)); 
      for(int i=0; i<n; i++){
         if(i){
            vs[i] = vs[i-1];
            vt[i] = vt[i-1];
         }
         vs[i][s[i] - 'a']++;
         vt[i][t[i] - 'a']++;
      }
      while(q--){
         int ans = 0;
         int l, r;
         cin>>l>>r;
         l--; r--;
         for(int i=0; i<26; i++){
            if(l){
               // cout << char('a' + i) << " " << (vs[r][i] - vs[l - 1][i]) << " " << (vt[r][i] - vt[r][i])<<endl;
               ans += abs((vs[r][i] - vs[l-1][i]) - (vt[r][i] - vt[l-1][i])); 
            }
            else{
               // cout << char('a' + i) << " " << vs[r][i] <<" "<< vt[r][i]<<endl;
               ans += abs(vs[r][i] - vt[r][i]);
            }
         }
         cout<<ans/2<<endl;
      }
   }
   return 0;
}