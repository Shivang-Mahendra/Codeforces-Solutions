#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      if(a == b){
         cout<<0<<endl;
         continue;
      }
      double maxi = max(a,b);
      double mini = min(a,b);
      double ans = maxi - (maxi + mini)/2;
      if(ans < c){
         cout<<1<<endl;
         continue;
      }
      cout<<(int)(ans/c) + (((ans != (int)ans) || int(ans)%c)? 1 : 0)<<endl;
   }
   return 0;
}