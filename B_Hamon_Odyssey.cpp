#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++)
         cin>>a[i];
      int ans = 1, an = a[0];
      for(int i=0; i<n; i++){
         an &= a[i];
         if(an == 0){
            if(i == n - 1) break;
            ans++;
            an = a[i+1];
         } 
      }
      if(an != 0)
         ans--;
      cout<<max(ans, 1)<<endl;
   }
   return 0;
}