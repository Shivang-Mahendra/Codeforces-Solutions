#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      if(n%2!=0){
         cout<<"YES"<<endl;
      }
      else{
         int flag=0;
         for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
               flag=1;
               break;
            }
         }
         if(flag){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }
      }
   }
   return 0;
}