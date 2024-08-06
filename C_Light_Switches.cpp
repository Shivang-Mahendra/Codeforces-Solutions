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
      int n,k;
      cin>>n>>k;
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      int ans = INT_MAX;
      sort(v.begin(), v.end());
      int l = v.back(), r = l + k - 1;
      while(l<=r){
         int mid = l + (r-l)/2;
         bool flag = true;
         for(int i=0; i<n; i++){
            if(((mid-v[i])/k)&1){
               flag = false;
               break;
            }
         }
         if(flag){
            ans = min(ans, mid);
            r = mid - 1;
         }
         else{
            l = mid + 1;
         }
      }
      cout<<((ans==INT_MAX)?-1:ans)<<endl;
   }
   return 0;
}