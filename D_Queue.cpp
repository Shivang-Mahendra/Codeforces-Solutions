#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   sort(all(v));
   int t = 0, ans = 0;
   for(int i=0; i<n; i++){
      if(t > v[i]){
         continue;
      }
      else{
         ans++;
         t += v[i];
      }
   }
   cout<<ans<<endl;
   return 0;
}