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
      int m;
      cin>>m;
      for(int i=0; i<m; i++){
         string s;
         cin>>s;
         if(s.size() != n){
            cout<<"NO"<<endl;
            continue;
         }
         int f = 1;
         vector<int> li(26, -1);
         unordered_map<int, char> mp;
         for(int j=0; j<n; j++){
            if(li[s[j] - 'a'] != -1){
               if(v[j] != v[li[s[j] - 'a']] || mp[v[j]] != s[j]){
                  f = 0;
                  break;
               }
            }
            else{
               li[s[j] - 'a'] = j;
               if(mp.find(v[j]) != mp.end()){
                  f=0;
                  break;
               }
               mp[v[j]] = s[j];
            }
         }
         if(f){
            cout<<"YES\n";
         }
         else{
            cout<<"NO\n";
         }
      }
   }
   return 0;
}