#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n][3];
   for(int i=0; i<n; i++){
      cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
   }
   for(int j=0; j<3; j++){
      int x=0;
      for(int i=0; i<n; i++){
         x+=arr[i][j];
      }
      if(x!=0){
         cout<<"NO"<<endl;
         return 0;
      }
   }
   cout<<"YES"<<endl;
   return 0;
}