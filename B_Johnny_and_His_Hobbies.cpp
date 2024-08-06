#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      unordered_map<int, int> m;
      for(int i=0; i<n; i++){
         cin>>a[i];
         m[a[i]]++;
      }
      bool fl = 1;
      for(int k=1; k<=1024; k++){
         bool flag = 1;
         for(int i=0; i<n; i++){
            if(!m[a[i] ^ k]){
               flag = 0;
               break;
            }
         }
         if(flag){
            cout<<k<<endl;
            fl = 0;
            break; 
         }
      }
      if(fl){
         cout<<-1<<endl;
      }
   }
   return 0;
}