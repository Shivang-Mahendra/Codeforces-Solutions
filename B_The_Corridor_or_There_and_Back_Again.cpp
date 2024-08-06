#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<pair<int, int>>ti(n);
      for(int i=0;i<n;i++){
         cin>>ti[i].first>>ti[i].second;
      }
      int k = INT_MAX;
      for(int i=0; i<n; i++){
         k = min(k, ti[i].first + ((ti[i].second/2 + ti[i].second%2) - 1));
         // cout<<k<<endl;
      }
      cout<<k<<endl;
   }
   return 0;
}