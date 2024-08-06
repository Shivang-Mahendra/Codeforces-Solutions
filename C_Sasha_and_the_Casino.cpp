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
      ll k, x, a;
      cin>>k>>x>>a;
      if(a <= x){
         cout<<"NO"<<endl;
         continue;
      }
      if(k-1 >= x){
         cout<<"YES"<<endl;
      }
      else
         cout<<"NO"<<endl;
   }
   return 0;
}