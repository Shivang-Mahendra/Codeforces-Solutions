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
      cin>>n;
      vector<int> v;
      for(int i=0; i<n; i++){
         for(int j=0; j<4; j++){
            char ch;
            cin>>ch;
            if(ch == '#'){
               v.push_back(j+1);
            }
         }
      }
      reverse(all(v));
      for(auto it : v)  cout<<it<<" ";
      cout<<endl;
   }
   return 0;
}