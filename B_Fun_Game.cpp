#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int te;
   cin>>te;
   while(te--){
      int n;
      string s,t;
      cin>>n>>s>>t;
      int i = 0;
      if(s[0]=='0' && t[0]=='1'){
         cout<<"NO"<<endl;
         continue;
      }
      while(i<n && (t[i]=='0' || t[i] == s[i])){
         i++;
      }
      if(i==n){
         cout<<"YES"<<endl;
         continue;
      }
      else{
         int j = 0;
         while(j<i && s[j] == '0'){
            j++;
         }
         if(j == i){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }
      }
   }
   return 0;
}