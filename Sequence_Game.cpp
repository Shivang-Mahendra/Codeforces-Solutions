#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n), ans;
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      ans.push_back(a[0]);
      for(int i=1; i<n; i++){
         if(a[i] >= a[i-1]){
            ans.push_back(a[i]);
         }
         else{
            ans.push_back(1);
            ans.push_back(a[i]);
         }
      }
      cout<<ans.size()<<endl;
      for(int i=0; i<ans.size(); i++){
         cout<<ans[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}