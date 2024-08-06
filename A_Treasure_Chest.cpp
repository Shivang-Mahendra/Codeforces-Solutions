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
      int x, y, k;
      cin>>x>>y>>k;
      if(x >= y){
         cout<<x<<endl;
      }
      else{
         if(x+k >= y){
            cout<<y<<endl;
         }
         else{
            cout<<y + y - (x+k)<<endl;
         }
      }
   }
   return 0;
}