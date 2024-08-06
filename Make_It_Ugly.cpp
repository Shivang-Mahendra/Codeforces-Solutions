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
      int n, f = 0;
      cin>>n;
      vector<int> a(n);
      unordered_map<int, int> mp;
      for(int i=0; i<n; i++){
         cin>>a[i];
         if(i && a[i] != a[i-1]){
            f=1;
         }
         mp[a[i]]++;
      }
      if(!f){
         cout<<-1<<endl;
         continue;
      }
      int mx = 0, ele; 
      for(auto it : mp){
         if(it.second > mx){
            mx = it.second;
            ele = it.first;
         }
      }
      int mini = n;
      for(int i=0; i<n; ){
         if(a[i] == ele){
            int j = i, c = 0;
            while(j<n && a[j] == ele){
               j++;
               c++;
            }
            mini = min(c,mini);
            i = j;
         }
         else{
            i++;
         }
      }
      cout<<mini<<endl;
      // if(a[0] != a[1] || a[n-2] != a[n-1]){
      //    cout<<1<<endl;
      //    continue;
      // }
      // int mini = INT_MAX;
      // unordered_map<int, int> mp;
      // for(int i=0; i<n; ){
      //    int c = 0, j=i;
      //    while(j<n && a[i]==a[j]){
      //       c++;
      //       j++;
      //    }
      //    if(mp.find(a[i]) == mp.end()){
      //       mp[a[i]] = c;
      //    }
      //    else{
      //       mp[a[i]] = min(c , mp[a[i]]);;
      //    }
      //    i=j;
      // }

      // cout<<mini<<endl;
   }
   return 0;
}