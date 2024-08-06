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
      int n, k;
      string s;
      cin>>n>>k>>s;
      unordered_map<char, int> m;
      for(int i=0; i<n; i++){
         m[s[i]]++;
      }
      int c = 0;
      for(auto it : m)
         if(it.second%2 != 0)
            c++;
      // cout<<c<<endl;
      if(c-k >= 0 && c-k <= 1){
         cout<<"YES"<<endl;
      }
      else if(k>c && ((k-c)%2 == 0 || (n-k)%2 == 1))
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
   return 0;
}