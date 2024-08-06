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
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      int count = 0, sum = 0, mx = 0;
      for(int i=0; i<n; i++){
         sum += arr[i];
         mx = max(mx, arr[i]);
         if(sum - mx == mx){
            count++;
         }
      }
      cout<<count<<endl;
   }
   return 0;
}