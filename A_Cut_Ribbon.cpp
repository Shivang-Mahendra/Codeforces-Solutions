#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, a, b, c;
   cin>>n>>a>>b>>c;
   int ans = 0;
   for(int x= 0; x<=4000; x++){
      for(int y=0; y<=4000; y++){
         int zc = n - x*a - b*y;
         if(zc<0)
            break;
         double z = (double)zc/c;
         if(z == (int)z)
            ans = max(ans, x+y+(int)z);
      }
   }
   cout<<ans<<endl;
   return 0;
}