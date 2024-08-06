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
      int n;
      cin>>n;
      vector<ll> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      ll ans = *max_element(all(v)), temp = v[0], j = 0;
      for(int i=1; i<n; i++){
         if(abs(v[i-1])%2 != abs(v[i])%2){
            temp += v[i];
            ans = max(ans, temp);
            int k = j; ll te = temp;
            while(k<=i){
               te -= v[k];
               ans = max(ans, te);
               k++;
            }
         }
         else{
            while(j<=i){
               temp -= v[j];
               ans = max(ans, temp);
               j++;
            }
            j = i;
            temp = v[i];
            ans = max(temp, ans);
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}