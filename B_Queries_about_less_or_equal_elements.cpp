#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, m;
   cin>>n>>m;
   vector<int> a(n),b(m);
   for(int i=0; i<n; i++) cin>>a[i];
   for (int i = 0; i < m; i++)
      cin >> b[i];
   sort(a.begin(), a.end());
   for(int i=0; i<m; i++){
      int l = 0, r = n - 1, an = -1;
      while(l<=r){
         int mid = (r-l)/2 + l;
         if(a[mid] > b[i]){
            r = mid - 1;
            an = mid;
         } 
         else {
            // an = mid;
            l = mid + 1;
         }
         // else  l = mid + 1;
      }
      if(an != -1)
         b[i] = an;
      else
         b[i] = n;
   }
   for(int i=0; i<m; i++) 
      cout<<b[i]<<" ";
   return 0;
}