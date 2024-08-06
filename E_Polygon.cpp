#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, ans = 1;
      cin>>n;
      vector<string> a(n);
      vector<vector<int>> b(n, vector<int> (n,0));
      for(int i=0; i<n; i++){
         // for(int j=0; j<n; j++){
            cin>>a[i];
            // for(int j=0; j<n; j++){
            //    if(a[i][j] == '1')
            //       count++;
            // }
      }
      for(int i=0; i<n-1; i++){
         for(int j =0; j<n-1; j++){
            if(a[i][j] == '1' && a[i+1][j] != '1' && a[i][j+1] != '1')
               ans = 0;
         }
      }
      // for (int i = 0; i < n; i++){
      //    for (int j = n-1; j >= 0; j--){
      //       if(j == n-1 && a[i][j] == '1')
      //          b[i][j] = 1;
      //       else if(a[i][j] == '1')
      //          b[i][j] = b[i][j+1];
      //    }
      // }
      // for (int j = 0; j < n; j++){
      //    for (int i = n - 1; i >= 0; i--){
      //       if (i == n - 1 && a[i][j] == '1')
      //          b[i][j] = 1;
      //       else if (a[i][j] == '1' && b[i][j] == 0)
      //          b[i][j] = b[i + 1][j];
      //    }
      // }
      // for(int i=0; i<n; i++){
      //    for(int j=0; j<n; j++){
      //       if(a[i][j] == '1' && b[i][j] == 0){
      //          ans = 0;
      //       }
      //    }
      // }
      if(ans == 0)
         cout<<"NO"<<endl;
      else
         cout<<"YES"<<endl;
   }
   return 0;
}