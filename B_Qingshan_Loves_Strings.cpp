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
      int n , m, f = 0, c = 0;
      string s, t;
      cin>>n>>m>>s>>t;
      for(int i=0; i<m-1; i++){
         if(t[i] == t[i+1]){
            // cout<<"NO"<<endl;
            f = 1;
            break;
         }
      }
      for(int i=0; i<n-1; i++){
         if(s[i] == s[i+1]){
            // cout<<i<<endl;
            c++;
            if(s[i] == t[0] || s[i+1] == t[m-1]){
               // cout<<"NO"<<endl;
               f = 1;
               break;
            }
         }
      }
      if(f && c){
         cout<<"NO"<<endl;
         continue;
      }
      else
         cout<<"YES"<<endl;
   }
   return 0;
}