#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,k;
      cin>>n>>k;
      if(n<k && n<2){
         cout<<"NO"<<endl;
      }
      else if(n%2==0){
         cout<<"YES"<<endl;
      }
      else{
         if(k%2!=0){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
      }
   }
   return 0;
}  