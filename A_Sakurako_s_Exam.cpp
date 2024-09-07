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
      int a,b;
      cin>>a>>b;
      if((b%2 == 0 && a%2 == 0) || (b%2!=0 && a>=2 && a%2==0)){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}