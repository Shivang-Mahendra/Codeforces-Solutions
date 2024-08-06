#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      sort(arr.begin(), arr.end());
      vector<pair<int,int>> ans;
      int f = arr[0];
      for(int i=1; i<n; i++){
         ans.push_back(make_pair(arr[i],f));
      }
      for(int i=0; i<n/2; i++){
         cout<<ans[i].first<<" "<<ans[i].second<<endl;
      }
   }
   return 0;
}