#include<bits/stdc++.h>
using namespace std;
const unsigned int MOD = 1000000007;
int main(){
   int x,y;
   long long n;
   // unsigned long long f = 1;
   cin>>x>>y>>n;
   // cout<<y%MOD<<endl;
   int seq[6];
   if(x<0)
      x += MOD;
   if(y<0)
      y += MOD;
   seq[0] = x % MOD;
   seq[1] = y % MOD;
   for(int i=2; i<6; i++){
      seq[i] = (seq[i-1] - seq[i-2]);
      if(seq[i]<0)
         seq[i] += MOD;
      seq[i] %= MOD;
   }
   // for(int i=0;i<n; i++)cout<<seq[i]<<endl;
   cout<<seq[(n%6 - 1) != -1 ?n%6 - 1 : 5 ];
   return 0;
}