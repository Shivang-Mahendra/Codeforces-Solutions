#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t; cin>>t;
   while(t--){
      string s;
      cin>>s;
      int ans = 0, p = 1;
      for(int i=0; i<4; i++){
         if(s[i] == '0'){
            ans += abs(10 - p) + 1;
            p = 10;
         }
         else{
            ans += abs(s[i] - '0' - p) + 1;
            p = s[i] - '0';
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}