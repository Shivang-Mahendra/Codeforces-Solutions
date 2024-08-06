#include<bits/stdc++.h>
using namespace std;
int main(){
   int  t;
   cin>>t;
   while(t--){
      int a, b, c;
      cin>>a>>b>>c;
      // if(a==b){
      //    if(a&1){
      //       cout<<"First"<<endl;
      //    }
      //    else{
      //       cout<<"Second"<<endl;
      //    }
      //    continue;
      // }
      a += c/2;
      a += (c % 2 == 0) ? 0 : 1;
      b += c/2;
      if(a>b){
         cout<<"First"<<endl;
      }
      else{
         cout<<"Second"<<endl;
      }
   }
   return 0;
}