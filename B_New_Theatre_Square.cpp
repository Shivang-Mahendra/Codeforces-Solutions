#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m,x,y,cost=0;
      cin>>n>>m>>x>>y;
      char arr[n][m];
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cin>>arr[i][j];
         }
      }
      if(y > x*2){
         y=x*2;
      }
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            if(arr[i][j]=='.'){
               if(j != m-1 && arr[i][j+1] == '.'){
                  cost+=y;
                  j++;
               }
               else{
                  cost+=x;
               }
            }
         }
      }
      cout<<cost<<endl;
   }
   return 0;
}