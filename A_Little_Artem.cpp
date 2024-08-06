#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m;
      cin>>n>>m;
      char paint[n][m];
      for(int i=0; i<n; i++){
         if(i%2==0){
            for(int j=0; j<m; j++){
               if(j%2==0)
                  paint[i][j] = 'B';
               else
                  paint[i][j] = 'W';
            }
         }
         else{
            for (int j = 0; j < m; j++)
            {
               if (j % 2 == 0)
                  paint[i][j] = 'W';
               else
                  paint[i][j] = 'B';
            }
         }
      }
      if((n*m)%2 == 0){
         if(n%2!=0)
            paint[n-1][1] = 'B'; 
         else
            paint[n - 1][0] = 'B';
      }
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cout << paint[i][j];
         }
         cout<<endl;
      }
   }
   return 0;
}