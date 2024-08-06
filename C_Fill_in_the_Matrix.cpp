#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int r ,c;
      cin>>r>>c;
      if(c==1){
         cout<<0<<endl;
         for(int i=0; i<r; i++)
            cout<<0<<endl;
      }
      else if(r==1){
         cout<<2<<endl;
         for(int i=0; i<c; i++){
            cout<<i<<" ";
         }
         cout<<endl;
      }
      else if(r <= c){
         int a[r][c];
         for(int i=0; i<2; i++){
            for(int j = 0; j<c; j++){
               a[i][j] = j;
            }
         }
         for(int i=2; i<r; i++){
            for(int j=0; j<c; j++){
               a[i][j] = (i-1+j)%c;
            }
         }
         cout<<min(r,c)<<endl;
         for(int i=0; i<r; i++){
            for(int j = 0; j<c; j++){
               cout<<a[i][j]<<" ";
            }
            cout<<endl;
         }
      }
      else{
         int a[r][c];
         for(int i=0; i<=c/2; i++){
            for(int j=0; j<c; j++){
               a[i][j] = j;
            }
         }
         for(int i=c/2 + 1; i<r; i++){
            for (int j = 0; j < c; j++){
               a[i][j] = (i - 2 + j) % c;
            }
         }
         cout << min(r, c) << endl;
         for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
               cout << a[i][j] << " ";
            }
            cout << endl;
         }
      }
   }
   return 0;
}