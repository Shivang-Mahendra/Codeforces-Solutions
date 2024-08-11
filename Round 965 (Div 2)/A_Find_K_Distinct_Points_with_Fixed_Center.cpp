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
      int x,y,k;
      cin>>x>>y>>k;
      int li = k/2;
      for(int i=1; i<=li; i++){
         cout<<x-i<<" "<<y-i<<endl;
      }
      for(int i=1; i<=li; i++){
         cout<<x+i<<" "<<y+i<<endl;
      }
      if(k&1){
         cout<<x<<" "<<y<<endl;
      }
   }
   return 0;
}