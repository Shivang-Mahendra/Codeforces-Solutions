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
      int n, m, k;
      cin>>n>>m>>k;
      vector<int> a(n);
      unordered_map<int ,int> b, mp, ele;
      for(int i=0; i<n; i++) cin>>a[i];
      for(int i=0; i<m; i++){
         int x;
         cin>>x;
         b[x]++;
      }
      int i=0, j=0, ans = 0, count = 0;
      while(j<n){
         if(b.find(a[j]) != b.end()){
            mp[a[j]]++;
         }
         if(/*b.find(a[j]) != b.end()*/b[a[j]] != 0){
            // mp[a[j]]++;
            b[a[j]]--;
            ele[a[j]]++;
            count++;
         }
         if(j-i+1 == m){
            // cout<<i << " " << ele<<endl;
            // if(mp.size() >= k){
               // ans++;
            // }
            if(count >= k){
               ans++;
            }
            if(mp[a[i]] != 0){
               count--;
               ele[a[i]]--;
               mp[a[i]]--;
               b[a[i]]++;
               // if(mp[a[i]] == 0)
               //    mp.erase(a[i]);
               if(mp[a[i]] > ele[a[i]]){
                  ele[a[i]]++;
                  b[a[i]]--;
                  count++;
               }
            }
            // if(b.find(a[i]) != b.end()){
            //    ele--;
            // }
            i++;
         }
         j++;
      }
      cout<<ans<<endl;
   }
   return 0;
}