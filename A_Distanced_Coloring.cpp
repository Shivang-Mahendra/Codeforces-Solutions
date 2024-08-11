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
      int x,y,z;
      cin>>x>>y>>z;
      if(x<z && y<z){
         cout<<x*y<<endl;
      }
      else if(x<z && y>=z){
         cout<<x*z<<endl;
      }
      else if(x>=z && y<z){
         cout<<y*z<<endl;
      }
      else{
         cout<<z*z<<endl;
      }
   }
   return 0;
}