#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,m,a,b,x,y,count1=0,count2=0;
      cin>>n>>m>>a>>b>>x>>y;
      if(a-1>0){
         count1++;
      }
      if(b-1>0){
         count1++;
      }
      if(a+1<=n){
         count1++;
      }
      if(b+1<=m){
         count1++;
      }
      if (x - 1 > 0)
      {
         count2++;
      }
      if (y - 1 > 0)
      {
         count2++;
      }
      if (x + 1 <= n)
      {
         count2++;
      }
      if (y + 1 <= m)
      {
         count2++;
      }
      cout<<min(count1,count2)<<endl;
   }
   return 0;
}