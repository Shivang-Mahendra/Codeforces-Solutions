#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int n;
   cin>>n;
   multiset<pair<int,int>> maxi, mini;
   char c;
   int l, r;
   for(int i=0; i<n; i++){
      cin>>c>>l>>r;
      if(c == '+'){
         maxi.insert({l,r});
         mini.insert({r,l});
      }
      else{
         maxi.erase(maxi.find({l,r}));
         mini.erase(mini.find({r,l}));
      }
      if(maxi.size() <= 1){
         cout<<"NO"<<endl;
      }
      else{
         auto lp = maxi.end();
         lp--;
         auto rp = mini.begin();
         if((*lp).first > (*rp).first){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
      }
   }
   return 0;
}