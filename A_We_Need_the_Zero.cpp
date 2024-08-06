#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,x=0,flag=0,temp=0;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      for(int x=0; x<=256; x++){
         for(int i=0; i<n; i++){
            temp ^=(arr[i]^x);
         }
         if( temp > 0){
            temp=0;
         }
         else{
            cout<<x<<endl;;
            flag=1;
            break;
         }
      }
      if(!flag)
         cout<<-1<<endl;
   }
   return 0;
}