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
      vector<int> arr(n);
      for(int i=0; i<n; i++) cin>>arr[i];
      sort(all(arr));
      int n1 = arr[0], n2 = arr[n-1], n3 = arr[1], n4 = arr[n-2];
      int ans = abs(n1 - n2) + abs(n2 - n3) + abs(n3 - n4) + abs(n4 - n1);
      cout<<ans<<endl;
   }
   return 0;
}