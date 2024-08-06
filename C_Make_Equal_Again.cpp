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
      ll n, f = 0;
      cin>>n;
      vector<ll> v(n);
      unordered_map<ll, ll> m;
      for(ll i=0; i<n; i++){
         cin>>v[i];
         m[v[i]]++;
      }
      ll left = 0, right = n-1;
      for(ll i=1; i<n; i++){
         if(v[0] == v[i])
            left++;
         else break;
      }
      for(ll i=n-2; i>=0; i--){
         if(v[n-1] == v[i])
            right--;
         else break;
      }
      if(m.size() == 1){
         cout<<0<<endl;
      }
      else if(left == 0 && right == n-1 && m.size() == n){
         cout<<n-1<<endl;
      }
      else if(v[0] == v[n-1]){
         cout<<right-left-1<<endl;
         // cout << left<< " "<<right << endl;
      }
      else{
         if((left + 1) >= (n - right)){
            cout<<n-(left+1)<<endl;
         }
         else{
            cout<<n-right<<endl;
            // cout << left << " " << right << endl;
         }
      }
   }
   return 0;
}