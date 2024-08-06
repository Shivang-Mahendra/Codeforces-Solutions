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
      string s;
      cin>>s;
      int ans = 1, flag = 0;
      int n = s.size();
      for(int i=1; i<n; i++){
         if(!flag && (s[i]-'0') >= (s[i-1]-'0')){
            if(s[i] > s[i-1]){
               flag = 1;
            }
            continue;
         }
         else if(s[i] == s[i-1]){
            continue;
         }
         else  ans++;
      }
      cout<<ans<<endl;
   }
   return 0;
}