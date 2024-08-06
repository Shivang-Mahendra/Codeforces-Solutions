#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   while(T--){
      unsigned long long n,x,t,dis=0;
      cin >> n >> x >> t;
      unsigned long long i = 1;
      while(i < n && i*x <= t){
         i++;
      }
      dis += i-1;
      dis += (unsigned long long)(((n-1)*(n-2))/2);
      cout<<dis<<endl;
   }
   return 0;
}