#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n, m, max = 0;
      cin>>n>>m;
      int arr[n][m];
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cin >> arr[i][j];
         }
      }
      for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            int temp = 0;
            int i1 = i - 1, j1 = j - 1;
            while(i1 >= 0 && j1 >= 0){
               temp += arr[i1][j1];
               i1--;
               j1--;
            }
            i1 = i - 1, j1 = j + 1;
            while (i1 >= 0 && j1 < m)
            {
               temp += arr[i1][j1];
               i1--;
               j1++;
            }
            i1 = i + 1, j1 = j - 1;
            while (i1 < n && j1 >= 0)
            {
               temp += arr[i1][j1];
               i1++;
               j1--;
            }
            i1 = i + 1, j1 = j + 1;
            while (i1 < n && j1 < m)
            {
               temp += arr[i1][j1];
               i1++;
               j1++;
            }
            temp += arr[i][j];
            if(temp > max){ 
               max = temp;
            }
         }
      }
      cout<<max<<endl;
   }
   return 0;
}