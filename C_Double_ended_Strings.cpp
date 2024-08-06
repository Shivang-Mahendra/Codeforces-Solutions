#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string a, b;
      cin>>a>>b;
      int n = a.size(), m = b.size(), ans = 0;
      for(int i=1; i<=min(n, m); i++){
         for(int j=0; j<=n-i; j++){
            for(int k=0; k<=m-i; k++){
               if(a.substr(j,i) == b.substr(k,i)){
                  ans = max(ans, i);
               }
            }
         }
      }
      cout<<n+m - 2*ans<<endl;
   }
   return 0;
}