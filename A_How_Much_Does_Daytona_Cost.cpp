#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k, f = 0;
      cin>>n>>k;
      for(int i=0; i<n; i++){
         int x;
         cin>>x;
         if(x == k)
            f = 1;
      }
      if(f)
         cout<<"YES"<<endl;
      else  
         cout<<"NO"<<endl;
   }
   return 0;
}