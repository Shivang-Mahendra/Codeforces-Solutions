#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      long long x,y,k;
      cin >> x >> y >> k;
      x--;
      long long req_s = y*k + k - 1;
      if(req_s%x){
         cout<<(req_s/x) + k +1 << endl;
      }
      else{
         cout << (req_s / x) + k << endl;
      }
   }
   return 0;
}