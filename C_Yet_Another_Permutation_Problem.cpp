#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      unordered_map<int, int> m;
      int j = 1;
      for(int i=0; i<n; i++){
         if(i == 0){
            a[i] = 1;
            m[a[i]] = 1;
         }
         else if(i > 1 && a[i-1] * 2 <= n){
            a[i] = a[i-1] * 2;
            m[a[i-1] * 2] = 1;
         }
         else{
            for(; j<=n; j++){
               if(m[j] == 0){
                  a[i] = j;
                  m[j]++;
                  break;
               }
            }
         }
      }
      for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}