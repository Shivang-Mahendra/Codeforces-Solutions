#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, eind = 0, oind = 0, e = 0, o = 0;
   cin>>n;
   for(int i=1; i<=n; i++){
      int x;
      cin>>x;
      if(x&1){
         oind = i;
         o++;
      }
      else{
         e++;
         eind = i;
      }
   }
   cout<<((e > o)? oind: eind);
   return 0;
}