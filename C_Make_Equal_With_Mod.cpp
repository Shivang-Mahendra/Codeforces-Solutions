#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, f1 = 0, f = 0; cin>>n;
      unordered_map<int,int> m;
      for(int i=0; i<n; i++){
         int x;
         cin>>x;
         m[x]++;
         if(x==1)
            f1 = 1;
         if (m[x+1] || m[x-1])
            f = 1;
      }
      if(f1 && f)
         cout<<"NO"<<endl;
      else  
         cout<<"YES"<<endl;
   }
   return 0;
}