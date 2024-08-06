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
      int n;
      cin>>n;
      vector<int> a(n), b(n);
      for(int i=0; i<n; i++)  cin>>a[i];
      for(int i=0; i<n; i++)  cin>>b[i];
      sort(all(a));
      sort(all(b));
      int i=0, j=0, ans = 0;
      while(j<n){
         if(a[i] > b[j]){
            // cout<<i<<endl;
            ans++;
            j++;
         }
         else{
            i++;
            j++;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}