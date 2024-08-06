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
      int x, y;
      cin>>x>>y;
      cout<<min(x,y)<<" "<<max(x, y)<<endl;
   }
   return 0;
}