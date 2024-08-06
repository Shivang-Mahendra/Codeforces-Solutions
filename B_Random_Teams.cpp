#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){
   ll n, m;
   cin>>n>>m;
   ll mi = n/m + ((n%m)?1:0);
   if(n%m){
      ll r = m - n%m, t = n/m;
      cout << (m - r) * ((mi * (mi - 1)) / 2) + r * ((t*(t-1))/2) <<" "; 
   }
   else
      cout << m * ((mi * (mi-1))/2) << " ";
   ll ma = n - m + 1;
   cout<<(ma * (ma - 1))/2;
   return 0;
}