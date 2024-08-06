#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int a,b,count=INT_MAX;
      cin>>a>>b;
      for(int i=1; i<=1e5; i++){
         int x = ceil(a/(i*1.0));
         int y = ceil(b/(i*1.0));
         count= min(count,i-1+x+y);
      }
      cout<<count<<endl;
   }
   return 0;
}  