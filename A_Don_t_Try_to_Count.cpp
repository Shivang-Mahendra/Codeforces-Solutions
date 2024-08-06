#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, m, ans = 0;
      string x, s;
      cin>>n>>m>>x>>s;
      while(x.find(s) == string::npos && x.size() <= 3*s.size()){
         x += x;
         ans++;
      }
      if (ans == 0 && x.find(s) == string::npos){
         x+=x;
         ans++;
      }
      if(x.find(s) == string::npos)
         cout<<-1<<endl;
      else
         cout<<ans<<endl;
   }
   return 0;
}