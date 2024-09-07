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
      string s;
      cin>>s;
      int n = s.size(), f=0;
      cout<<s[0];
      for(int i=1; i<n; i++){
         if(f == 0 && s[i] == s[i-1]){
            if(s[i] != 'a'){
               cout<<'a';
               f=1;
            }
            else{
               cout<<'b';
               f=1;
            }
         }
         cout<<s[i];
      }
      if(f==0){
         if(s[n-1] == 'a'){
            cout<<'b';
         }
         else{
            cout<<'a';
         }
      }
      cout<<endl;
   }
   return 0;
}