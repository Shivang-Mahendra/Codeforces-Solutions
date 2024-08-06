#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, m, c = 0;
      string s = "vika";
      cin>>n>>m;
      char a[n][m];
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cin>>a[i][j];
         }
      }
      for(int j=0; j<m; j++){
         for(int i=0; i<n; i++){
            if(a[i][j] == s[c]){
               c++;
               break;
            }
         }
      }
      if(c == 4){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }  
   return 0;
}