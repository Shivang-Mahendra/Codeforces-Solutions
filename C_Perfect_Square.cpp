#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, ans = 0;
      cin>>n;
      char mat[n][n]; 
      int check[n][n];
      for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            cin>>mat[i][j];
            check[i][j] = 0;
         }
      }
      for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            // if(mat[i][j] != mat[j][n-1-i]){
            //    ans += max(mat[i][j], mat[j][n - 1 - i]) - min(mat[i][j], mat[j][n - 1 - i]);
            //    mat[i][j] = mat[j][n-1-i] = max(mat[i][j], mat[j][n - 1- i]);
            //    if(mat[j][n-1-i] != mat[n-1-i][n - 1 - (n - 1 - i)]){
            //       ans += max(mat[j][n - 1 - i], mat[n - 1 - i][n - 1 - (n - 1 - i)]) - min(mat[j][n - 1 - i], mat[n - 1 - i][n - 1 - (n - 1 - i)]);
            //       mat[n - 1 - i][n - 1 - (n - 1 - i)] = mat[j][n - 1 - i];
            //    }
            // }
            if(!check[i][j]){
               check[i][j] = 1;
               int k = 0, r = i, c = j;
               char a[4];
               while(k<4){
                  a[k] = mat[r][c];
                  check[r][c] = 1;
                  int t = r;
                  r = c;
                  c = n - 1 - t;
                  k++;
               }
               sort(a, a + 4);
               k = 0;
               while(k<3){
                  ans += a[3] - a[k];
                  k++;
               }
            }
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}