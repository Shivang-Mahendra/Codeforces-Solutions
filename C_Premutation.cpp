#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      // cout<<"in"<<endl;
      int n;
      cin >> n;
      vector<vector<int> > arr(n, vector<int> (n-1));
      for(int i=0; i<n; i++){
         for(int j=0; j<n-1; j++){
            cin>>arr[i][j];
         }
      }
      sort(arr.begin(),arr.end());
      vector<int> ans(n);
      for(int i=1; i<n; i++){
         if(arr[i-1][0] != arr[i][0]){
            if(i<=n/2){
               ans[0] = arr[i][0];
               ans[1] = arr[i-1][0];
            }
            else{
               ans[0] = arr[i-1][0];
               ans[1] = arr[i][0];
            }
         }
      }
      // cout<<ans[0]<<" "<<ans[1]<<" \n";
      int k = 2;
      for(int i=1; i<n-1; i++){
         for(int j=0; j<n; j++){
            if(arr[j][i] != ans[k-1]){
               ans[k++] = arr[j][i];
               break;
            }
         }
      }
      for(int i=0; i<n; i++){
         cout<<ans[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}