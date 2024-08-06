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
      int p1, p2, p3;
      cin>>p1>>p2>>p3;
      if((p1+p2+p3)%2){
         cout<<-1<<endl;
      }
      else if((p1==p2 || p2==p3) && p2==0)
         cout<<0<<endl;
      else{
         vector<int> v = {p1, p2, p3};
         int ans = 0;
         while(v[1]){
            ans++;
            v[1]--;
            v[2]--;
            sort(all(v));
         }
         cout<<ans<<endl;
      }
   }
   return 0;
}