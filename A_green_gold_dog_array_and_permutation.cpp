#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> b(n);
      vector<pair<int,int>> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i].first;
         a[i].second = i;
      }
      // unordered_map<int, int> m;
      sort(a.begin(), a.end());
      for(int i=0; i<n; i++){
         b[a[i].second] = n-i;
      }
      for(int i=0 ; i<n; i++){
         cout<<b[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}