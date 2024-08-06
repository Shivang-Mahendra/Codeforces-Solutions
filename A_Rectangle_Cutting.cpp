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
      int n, m;
      cin>>n>>m;
      int maxi = max(n,m);
      int mini = min(n,m);
      if((maxi/2 == mini && mini % 2 != 0) || (m == n && n == 1))
         cout<<"No"<<endl;
      else
         cout<<"Yes"<<endl;
   }
   return 0;
}