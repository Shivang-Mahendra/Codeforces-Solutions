#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int mini, maxi = 0;
      int n, m;
      cin>>n>>m;
      vector<int> a(n), b(m);
      for(int i=0; i<n; i++){
         cin>>a[i];
         maxi ^= a[i];
      }
      mini = maxi; 
      for(int  i=0; i<m; i++){
         cin>>b[i];
      }
      // for(int i=0; i<m; i++){
      //    int t = 0;
      //    for(int j=0; j<n; j++){
      //       t ^= (a[j]|b[i]);
      //    }
      //    mini = min(t,mini);
      //    maxi = max(t, maxi);
      // }
      if(n & 1){
         int b_or = 0;
         for(int  i=0; i<m; i++){
            b_or = (b_or|b[i]);
         }
         maxi = 0;
         for(int i=0; i<n; i++){
            maxi ^= (a[i] | b_or);
         }
         // cout<<(0|1)<<endl;
      }
      else{
         int b_or = 0;
         for (int i = 0; i < m; i++){
            b_or |= b[i];
         }
         mini = 0;
         for (int i = 0; i < n; i++){
            mini ^= (a[i] | b_or);
         }
      }
      cout<<mini<<" "<<maxi<<endl;
   }
   return 0;
}