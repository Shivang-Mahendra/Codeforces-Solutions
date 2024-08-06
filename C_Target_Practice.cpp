#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int ans = 0;
      char a[10][10];
      for(int i=0; i<10; i++){
         for(int j=0; j<10; j++){
            cin>>a[i][j];
            if(a[i][j] == 'X'){
               int js = 1, is = 1;
               if(i < 5){
                  is += i;
               }
               else{
                  is += (9-i);
               }
               if(j<5){
                  js += j;
               }
               else{
                  js += (9-j);
               }
               ans += min(is,js);
            }
         }
      }
      // for(int i=0; i<10; i++){
      //    for(int j=0; j<10; j++){
      //       cout<<a[i][j];
      //    }
      //    cout<<endl;
      // }
      cout<<ans<<endl;
   }
   return 0;
}