#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,ans=-1,temp;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
         if(arr[i]<n){
            if(ans==-1){
               temp=arr[i];
               ans=1;
            }
            else if(temp==arr[i]){
               ans++;
            }
         }
      }
      if(ans!=-1)
         cout<<n-ans<<endl;
      else{
         cout<<-1<<endl;
      }
   }
   return 0;
}