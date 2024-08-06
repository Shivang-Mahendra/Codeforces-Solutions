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
      int n,m;
      cin>>n>>m;
      string a, b;
      cin>>a>>b;
      int i =0, j = 0, ans = 0;
      while(i<n && j<m){
         if(a[i] == b[j]){
            i++;
            j++;
            ans++;
         }
         else{
            j++;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}