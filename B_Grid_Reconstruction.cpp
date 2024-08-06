#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int arr[2][n];
      arr[0][0]=2*n;
      int i=1,c=1;
      for(int j=0;j<n;j++){
         arr[i][j] = c;
         c++;
         i = !i;
      }
      i=1;
      for(int j=1;j<n; j++){
         arr[i][j] = c;
         c++;
         i = !i;
      }
      for(i=0; i<2; i++){
         for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;
      }
   }
   return 0;
}