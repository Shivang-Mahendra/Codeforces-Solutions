#include<bits/stdc++.h>
using namespace std;
int main(){
   // CAN USE MIN HEAP ALSO 

   int t;
   cin>>t;
   while(t--){
      int n, m;
      cin >> n >> m;
      vector<long long> a(n),b(m);
      for(int i = 0; i < n; i++){
         cin >> a[i];
      }
      for (int i = 0; i < m; i++)
      {
         cin >> b[i];
      }
      for(int i=0; i<m; i++){
         auto it = min_element(a.begin(),a.end());
         (*it) = b[i]; 
      }
      long long sum = 0;
      for(int i=0; i<n; i++){
         sum += a[i];
      } 
      cout<<sum<<endl;
   }
   return 0;
}