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
      int l,r,L,R;
      cin>>l>>r>>L>>R;
      if(R<l || r<L){
         cout<<1<<endl;
      }
      else if(l==L && R==r){
         cout<<r-l<<endl;
      }
      else if(l == L){
         if(r<R){
            cout<<r-l+1<<endl;
         }
         else{
            cout<<R-L+1<<endl;
         }
      }
      else if(R==r){
         if(L>l){
            cout<<R-L+1<<endl;
         }
         else{
            cout<<r-l+1<<endl;
         }
      }
      else{
         cout<<min(r,R) - max(l,L) + 2<<endl;
      }
   }
   return 0;
}