#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, ans = 0;
      cin >> n;
      vector<int> a(n);
      for(int i = 0; i < n; i++){
         cin >> a[i];
      }
      for(int i=0; i<n; i++){
         int j = 0;
         while(a[i] % 2 == 0){
            j++;
            a[i] /= 2;
         } 
         ans += j;
      }
      if(ans >= n){
         cout<<0<<endl;
      }
      else{
         int op = 0;
         vector<int> ind(n);
         for(int i=1; i<=n; i++){
            int j = i, t = 0;
            while(j%2 == 0){
               j /= 2;
               t++;
            }
            ind[i-1] = t;
         }
         sort(ind.begin(), ind.end());
         for(int i=n-1; i>=0; i--){
            ans += ind[i];
            op++;
            if(ans >= n){
               break;
            }
         }
         if(ans >= n){
            cout<<op<<endl;
         }
         else
            cout<<-1<<endl; 
      }
   }
   return 0;
}