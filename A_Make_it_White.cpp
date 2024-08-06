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
      int n;
      string s;
      cin>>n>>s;
      int st = n, e = 0;
      for(int i=0; i<n; i++){
         if(s[i] == 'B'){
            st = min(st,i);
            e = max(e,i);
         }
      }
      // cout<<e<<" "<<st<<endl;
      cout<<e-st+1<<endl;;
   }
   return 0;
}