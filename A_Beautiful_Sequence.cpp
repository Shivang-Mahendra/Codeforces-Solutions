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
      if(n==0){
         cout<<"NO"<<endl;;
      }
      else if(find(arr.begin(), arr.end(), 1) != arr.end()){
         cout<<"YES"<<endl;
      }
      else{
         int flag=0;
         for(int i=0; i<n; i++){
            if(i+1>=arr[i]){
               cout<<"YES"<<endl;;
               flag=1;
               break;
            }
         }
         if(!flag){
            cout<<"NO"<<endl;;
         }
      }
   }
   return 0;
}