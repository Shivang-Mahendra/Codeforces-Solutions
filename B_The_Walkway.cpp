#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m,d;
      cin>>n>>m>>d;
      vector<int> a(m);
      for(int i=0; i<m; i++){
         cin>>a[i];
      }
      int j = 0, k = 1, c = 0, cookie = 1;
      while(k+d<=n){
         k+=d;
         cookie++;
         while(j<n){
            if(a[j] <= k){
               c++;
               j++;
            }
            // else if(a[j] == k){
            //    j++;
            // }
            else{
               break;
            }
         }
      }
      cout<<cookie<<" "<<c<<endl;
   }
   return 0;
}