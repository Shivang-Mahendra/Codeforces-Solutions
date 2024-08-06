#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int m = (n*(n-1))/2;
      vector<int> a,b(m);
      for(int i=0; i<m; i++){
         cin>>b[i];
      } 
      sort(b.begin(),b.end());
      int l = n - 1;
      for(int i=0; i<m; ){
         a.push_back(b[i]);
         for(int j=0; j<l; j++){
            i++;
         }
         l--;
      }
      a.push_back(b[m-1]);
      for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}