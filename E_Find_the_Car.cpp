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
      int n,k,q;
      cin>>n>>k>>q;
      vector<int> a(k+1), b(k+1);
      vector<pair<int,int>> speed(k+1);
      a[0] = 0;
      b[0] = 0;
      speed[0] = {0,1};
      for(int i=1; i<=k; i++){
         cin>>a[i];
      }
      for(int i=1; i<=k; i++)
         cin>>b[i];
      for(int i=1; i<=k; i++){
         // speed[i] = floor(((a[i] - a[i-1])*1.0) / (b[i] - b[i-1]));
         speed[i] = {a[i] - a[i-1], b[i] - b[i-1]};
      }
      while(q--){
         int x;
         cin>>x;
         // cout<<x<<endl;
         if(x==0){
            cout<<"0"<<" ";
            continue;
         }
         int l = 0, r = k, ind;
         while(l<=r){
            int mid = (r-l)/2 + l ;
            // cout<<"here"<<endl;
            if(a[mid] == x){
               ind = mid;
               break;
            }
            else if(a[mid] < x){
               ind = mid;
               l = mid + 1;
            }
            else{
               r = mid - 1;
            }
         }
         int ans = b[ind];
         // cout<<"here"<<endl;
         
         if(a[ind] == x){
            cout<<ans<<" ";
         }
         else{
            ans += (((x - a[ind]) * speed[ind + 1].second)/speed[ind + 1].first);
            cout<<ans<<" ";
         }

      }
      cout<<endl;
   }
   return 0;
}