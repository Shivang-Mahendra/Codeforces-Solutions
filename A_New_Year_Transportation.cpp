#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, k;
   cin>>n>>k;
   vector<int> v(n+1, 1);
   for(int i=1; i<n; i++)
      cin>>v[i];
   for(int i=1; i<=n; i+=v[i]){
      if(i == k){
         cout<<"YES"<<endl;
         return 0;
      }
   }
   cout<<"NO"<<endl;
   return 0;
}