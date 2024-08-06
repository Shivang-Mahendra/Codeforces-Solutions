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
      int n, odd = 0;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin >> v[i];
         if(v[i]%2 == 1)
            odd++;
      }  
      if(odd == 0 || odd == n){
         cout<<0<<endl;
         continue;
      }
      sort(v.begin(), v.end());
      int om=INT_MIN, em = INT_MIN, ans = 0;
      for(int i=0; i<n; i++){
         if(v[i]%2 == 0){
            em = max(em, v[i]);
         }
         else{
            om = max(om, v[i]);
         }
      }
      for(int i=0; i<n; i++){
         if(v[i]%2 == 0){
            if(om > v[i]){
               ans++;
               om += v[i];
            }
            else{
               ans += 2;
               om += em;
            }
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}