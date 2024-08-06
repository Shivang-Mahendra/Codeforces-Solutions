#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m,k;
      cin>>n>>m>>k;
      if(m==0 ||(n==k && m!=1)){
         cout<<0<<endl;
      }
      else{
         if(n/k>=m){
            cout<<m<<endl;
         }
         else{
            int p1 = n/k;
            int remc = m-(n/k),remp=k-1;
            int p2 = remc/remp + ((remc%remp!=0)?1:0);
            cout<<(p1-p2)<<endl;
         }
      }
   }
   return 0;
}