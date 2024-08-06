#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; 
   cin>>t;
   while(t--){
      int n, zero = 0, one = 0;
      cin>>n;
      vector<pair<int, int>> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i].first;
      }
      for(int i=0; i<n; i++){
         cin>>v[i].second;
         if(v[i].second == 0)
            zero++;
         else
            one++;
      }
      if(zero == 0 || one == 0){
         int f = 0;
         for(int i=0; i<n-1; i++){
            if(v[i].first > v[i+1].first){
               f = 1;
               break; 
            }
         }
         if(f)
            cout<<"NO"<<endl;
         else
            cout<<"YES"<<endl;
      }
      else  
         cout<<"YES"<<endl;
   }
   return 0;
}