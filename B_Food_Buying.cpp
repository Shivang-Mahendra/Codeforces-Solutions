#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int ans = (n/10) * 10;
      if(n < 10){
         cout<<n<<endl;
         continue;
      }
      while (n >= 10){
         int temp = (n / 10) + (n % 10);
         // cout<<"temp " <<temp<<endl;
         ans += (temp / 10)*10;
         n = temp;
         // cout<<n<<endl;
      }
      cout<<ans+ n<<endl;
   }
   return 0;
}