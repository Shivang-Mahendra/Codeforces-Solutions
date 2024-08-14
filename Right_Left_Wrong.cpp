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
      if(i)
         v[i] += v[i-1];
      }
      string s;
      cin>>s;
      int i=0, j=n-1;
      int ans = 0;
      while(i<j){
         if(s[i] == 'L' && s[j] == 'R'){
            if(i){
               ans += (v[j] - v[i-1]);
            }
            else{
               ans += v[j];
            }
            i++;j--;
         }
         else{
            if(s[i]  != 'L')
               i++;
            if(s[j] != 'R')
               j--;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}