#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      string str = "";
      cin>>n;
      int cnt8 = (n/4)+((n%4)?1:0);
      while(n!=cnt8){
         str+='9';
         n--;
      }
      while(cnt8){
         str+='8';
         cnt8--;
      }
      cout << str << endl;
   }
   return 0;
}