#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int T;
   cin>>T;
   while(T--){
      string s,t;
      cin>>s>>t;
      int n = s.size(), m = t.size();
      int i =0, j = 0, q = 0;
      while(i<n && j<m){
         if(s[i] == t[j]){
            i++;
            j++;
         }
         else if(s[i] == '?'){
            s[i] = t[j];
            j++;
            i++;
         }
         else{
            i++;
         }
      }
      if(j == m){
         cout<<"YES"<<endl;
         if(i == n){
            cout<<s<<endl;
         }
         else{
            while(i<n){
               if(s[i] == '?'){
                  s[i] = 'a';
               }
               i++;
            }
            cout<<s<<endl;
         }
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}