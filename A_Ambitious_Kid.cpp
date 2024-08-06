#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int n, ans = INT_MAX;
   cin>>n;
   for(int i=0; i<n; i++){
      int x;
      cin>>x;
      ans  = min(ans, abs(x));
   }
   cout<<ans<<endl;
   return 0;
}