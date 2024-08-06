#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, k;
   bool cond = true;
   cin>>n>>k;
   vector<int> a(n), sle(n);
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   for (int i = 0; i < n; i++){
      cin >> sle[i];
      if(sle[i] == 0)
         cond = false;
   }
   long long ans = 0;
   if(k == n || cond){
      for(int i=0; i<n; i++){
         ans += a[i];
      }
      cout<<ans<<endl;
      return 0;
   }
   for(int i=0; i<n; i++){
      if(sle[i])
         ans += a[i];
   }
   vector<int> pre(n,0);
   pre[0] = (sle[0] == 0)? a[0] : 0; 
   for(int i=1; i<n; i++){
      pre[i] = pre[i-1];
      if (sle[i] == 0)
         pre[i] += a[i];
   }
   int maxi = pre[k-1];
   for(int i=k; i<n; i++){
      maxi = max(maxi, pre[i] - pre[i - k]);
   }
   cout<<ans + maxi<<endl;
   return 0;
}