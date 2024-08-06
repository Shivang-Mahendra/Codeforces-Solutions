#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, f = 0;
      cin>>n;
      unordered_map<int,int> m;
      for(int i=0; i<n; i++){
         int x;
         cin>>x;
         m[x]++;
         if(m[x] == 2)
            f = 1;
      }
      if(f){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}