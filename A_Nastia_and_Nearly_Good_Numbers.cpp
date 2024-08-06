#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long a,b;
      cin>>a>>b;
      if(b!=1){
         cout<<"Yes"<<endl;
         cout<<a*b<<" "<<a<<" "<<a+a*b<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}