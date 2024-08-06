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
      vector<int> v(26, 0);
      int n;
      string s, r="";
      cin>>n>>s;
      for(int i=0; i<n; i++){
         v[s[i]-'a']++;
      }
      for(int i=0; i<26; i++){
         if(v[i] != 0){
            char ch = 'a' + i;
            r += ch;
         }
      }
      unordered_map<char,char> mp;
      int n1 = r.size();
      for(int i=0; i<n1; i++){
         mp[r[i]] = r[n1-i-1];
      }
      for(int i=0; i<n; i++){
         s[i] = mp[s[i]];
      }
      cout<<s<<endl;
   }
   return 0;
}