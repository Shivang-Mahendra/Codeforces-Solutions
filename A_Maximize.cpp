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
      int x, y = 1;
      cin>>x;
      int ans = 1;
      for(int i=1; i<x; i++){
         if(ans <= __gcd(x, i) + i){
            ans = max(ans, __gcd(i,x) + i);
            y = i;
         }
      }
      cout<<y<<endl;
   }
   return 0;
}