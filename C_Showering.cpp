#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, s, m;
      cin>>n>>s>>m;
      vector<pair<int,int>> v(n);
      for(int i=0; i<n; i++){
         int l,r;
         cin>>l>>r;
         v[i] = {l,r};
      }
      sort(all(v));
      bool flag = false;
      if(v[0].first - 0 >= s){
         cout<<"YES"<<endl;
         continue;
      }
      for(int i=1; i<n; i++){
         if(v[i].first - v[i-1].second >= s){
            flag = true;
            break;
         }
      }
      if(flag || m-v[n-1].second >= s){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}