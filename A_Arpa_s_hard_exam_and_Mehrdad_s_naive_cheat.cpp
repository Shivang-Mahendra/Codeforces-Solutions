#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n, ans = 1L, a = 8L;
   cin >> n;
   while(n){
      if(n % 2 != 0){
         ans = (ans * a) % 10;
         n--;
      }
      else {
         a = (a * a) % 10;
         n /= 2;
      }
   }
   cout << ans;
   return 0;
}