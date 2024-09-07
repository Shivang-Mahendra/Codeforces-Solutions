#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   string s;
   cin>>s;
   int n = s.size();
   int ans = -1;
   int i=0, j=1;
   for(j=1; j<n; j++){
      if(s[i] == s[j]){
         int k = j;
         while(k < n && s[i] == s[k]){
            i++; k++;
         }
         if(k == n && n-j > j){
            ans = j;
            break;
         }
         else{
            i=0;
         }
      }
   }
   if(ans != -1){
      // cout<<ans<<endl;
      cout<<"YES\n"<<s.substr(ans, n-ans);
   }
   else  
      cout<<"NO";
   return 0;
}