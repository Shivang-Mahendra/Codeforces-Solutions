#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int mi = min({a, b, c});
      if (a % mi != 0 || b % mi != 0 || c % mi != 0){
         cout<<"NO"<<endl;
         continue;
      }
      int ans = ((a / mi) - 1) + ((b / mi) - 1) + ((c / mi) - 1);
      if(ans<=3)
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
   return 0;
}