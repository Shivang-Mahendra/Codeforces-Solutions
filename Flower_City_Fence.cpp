#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, d = 0, j = 0;
      bool flag = 1;
      cin>>n;
      vector<int> a(n), b;
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      for(int i=n-1; i>=0; i--){
         int t = a[i] - d;
         d += t;
         while(t--){
            // b.push_back(i+1);
            if(a[j] != i+1){
               flag = 0;
               cout<<"NO"<<endl;
               break;
            }
            j++;
         }
         if(flag == 0)
            break;
      }
      if(flag){
         cout<<"YES"<<endl;
      }
      // if(n == b.size()){
      //    for(int i=0; i<n; i++){
      //       if(a[i] != b[i]){
      //          flag = 0;
      //          cout<<"NO"<<endl;
      //          break;
      //       }
      //    }
      //    if(flag){
      //       cout<<"YES"<<endl;
      //    }
      // }
      // else{
      //    cout<<"NO"<<endl;
      // }
   }
   return 0;
}