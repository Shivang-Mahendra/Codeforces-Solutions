#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, m, d, ans = 0, prev = 0;
      cin>>n>>m>>d;
      vector<int> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      for(int i=0; i<n && m; i++){
         if(a[i] > 0 && (a[i] - d*(i+1 - prev))>0){
            m--;
            ans += a[i] - d*(i+1 - prev);
            prev = i+1;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}