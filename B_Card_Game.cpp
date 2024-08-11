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
      vector<int> su(2), sa(2);
      cin>>su[0]>>su[1]>>sa[0]>>sa[1];
      sort(su.begin(), su.end());
      sort(sa.begin(), sa.end());
      if(su[0] > sa[1]){
         cout<<4<<endl;
      }
      else if(su[0] == sa[1] && su[0] == sa[0] && su[0] == su[1])cout<<0<<endl;
      else if(su[0] <= su[1] && su[0] == sa[1] && su[0] >= sa[0]){
         cout<<4<<endl;
      }
      else if(su[0] > sa[0] && su[1] > sa[1]){
         cout<<2<<endl;
      }
      else if((su[0] == sa[0] && su[1] > sa[1]) || (su[0] > sa[0] && su[1] == sa[1])){
         cout<<2<<endl;
      }
      else{
         cout<<0<<endl;
      }
   }
   return 0;
}