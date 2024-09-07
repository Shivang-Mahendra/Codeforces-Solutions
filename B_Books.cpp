#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int n, t;
   cin>>n>>t;
   vector<int> v(n);
   for(int i=0; i<n; i++)  cin>>v[i];
   int ans = 0, i=0, j=0, st = 0;
   while(j<n){
      if(st + v[j] <= t){
         st += v[j];
         j++; 
      }
      else{
         while(i<j && st + v[j] > t){
            st -= v[i];
            i++;
         }
         if(i == j && v[i] > t){
            i++;
            j++;
            st = 0;
         }
         // if(i>j){
         //    j++;
         // }
      }
      ans = max(ans, j-i);
   }
   cout<<ans<<endl;
   return 0;
}