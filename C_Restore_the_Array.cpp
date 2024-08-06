#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,flag=0,j=0,ans_flag=0;
      cin>>n;
      vector<int> arr(n-1),ans(n);
      for(int i=0; i<n-1; i++){
         cin>>arr[i];
      }
      ans[0]=arr[0];
      ans[n-1] = arr[n-2];
      for(int i=0; i<n-2; i++){
         ans[i+1] = min(arr[i],arr[i+1]);
      }
      for(int i=0; i<n; i++){
         cout<<ans[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}