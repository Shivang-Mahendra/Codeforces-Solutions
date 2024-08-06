#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, f = 1;
      cin>>n;
      vector<int> a(n), diff(n);
      for(int i = 0; i<n; i++){
         cin>>a[i];
         if(i && a[i] < a[i-1])
            f = 0;
      }
      if(f){
         for(int i=0; i<n; i++){
            cout<<1<<" ";
         }
         cout<<endl;
         continue;
      }
      vector<int> ans;
      diff[0] = 1;
      for(int i=1; i<n; i++){
         diff[i] = a[i] - a[i-1];
      }
      int j = 0;
      for(int i=1; i<n; i++){
         if(diff[i] <= 0){
            while(j<n && diff[i] <= 0){
               diff[i] += a[j];
               j++;
               ans.push_back(i+1);
            }
         }
      }
      int m = ans.size();
      for(int i=0; i<max(n, m); i++){
         if(i<m)
            cout<<ans[i]<<" ";
         else{
            cout<<1<<" ";
         }
      }
      cout<<endl;
   }
   return 0;
}