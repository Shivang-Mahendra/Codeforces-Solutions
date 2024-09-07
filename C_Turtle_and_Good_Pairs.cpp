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
      int n;
      string s;
      cin>>n>>s;
      sort(all(s));
      int i=0, j = n-1;
      while(i<=j){
         if(i != j)
            cout<<s[i]<<s[j];
         else cout<<s[i];
         i++;
         j--;
      }
      cout<<endl;
   }
   return 0;
}