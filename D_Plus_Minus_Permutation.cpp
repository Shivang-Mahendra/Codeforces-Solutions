#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
      ll n,x,y, ans = 0;
      cin>>n>>x>>y;
      ll max = n, min = 1;
      if(x==y){
         cout<<0<<endl;
         continue;
      }
      ll lcm = (x*y)/__gcd(x,y);
      ll div_by_x = n/x - n/lcm;
      ll div_by_y = n/y - n/lcm;
      ll sum_x = (n*(n+1))/2 - ((n-div_by_x)*(n-div_by_x+1))/2;
      ll sum_y = (div_by_y*(div_by_y+1))/2;
      cout<<sum_x-sum_y<<endl;
      // for(int i=x; i<=n; i+= x){
      //    // if(i%x == 0 && i%y == 0){}
      //    // else if(i%x == 0){
      //    //    ans += max;
      //    //    max--;
      //    // }
      //    // else if(i%y==0){
      //    //    ans -= min;
      //    //    min++;
      //    // }
      //    if(i%y!=0){
      //       ans += max;
      //       max--;
      //    }
      // }
      // for (int i = y; i <= n; i += y){
      //    if (i % x != 0){
      //       ans -= min;
      //       min++;
      //    }
      // }
      // cout<<ans<<endl;
   }
   return 0;
}