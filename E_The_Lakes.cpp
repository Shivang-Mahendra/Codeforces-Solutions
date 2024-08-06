#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& arr, int i, int j, int& temp){
   if(i<0 || j<0 || j>=arr[0].size() || i>=arr.size() || arr[i][j] == 0){
      return;
   }
   temp+=arr[i][j];
   arr[i][j] = 0;
   dfs(arr, i+1, j, temp);
   dfs(arr, i-1 , j, temp);
   dfs(arr, i, j+1, temp);
   dfs(arr, i, j-1, temp);
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m;
      cin>>n>>m;
      vector<vector<int>> arr(n,vector<int> (m));
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            cin >> arr[i][j];
         }
      }
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            int temp = 0;
            dfs(arr, i, j, temp);
            sum = max(sum, temp);
         }
      } 
      cout<<sum<<endl;
   }
   return 0;
}