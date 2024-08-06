#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long a,b,n,s;
      long long total;
      cin>>a>>b>>n>>s;
      total = a*n + b;
      if(total<s){
         cout<<"NO"<<endl;
      }
      else if(total == s){
         cout<<"YES"<<endl;
      }
      else{
         if(s%n <= b){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
      }
   }
   return 0;
}