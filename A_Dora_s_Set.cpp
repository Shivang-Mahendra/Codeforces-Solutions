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
      int l, r;
      cin>>l>>r;
      int i= l;
      int odd = 0, even = 0;
      while(i <= r){
         if(i%2)
            odd++;
         else even++;
         i++;
      }
      odd /= 2;
      cout<<min(odd, even)<<endl;
   }
   return 0;
}