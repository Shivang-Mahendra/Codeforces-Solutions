#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      cout.precision(10);
      int n,d,h;
      cin>>n>>d>>h;
      vector<int> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      long double ans = (long double)d * h/2.0;;
      for(int i=0; i < n - 1; i++){
         if(a[i+1] - a[i] >= h){
            ans += (long double)d * h/2.0;
         }
         else{
            long double h1 = a[i+1] - a[i], d1 = (long double)d * (a[i] + h - a[i+1])/h;
            ans += (d + d1)/2.0 * h1;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}