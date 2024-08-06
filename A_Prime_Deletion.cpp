#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int i = 0, p1 = -1, p3 = -1;
      while(i<9){
         if(s[i] == '3')
            p3 = i;
         if(s[i] == '1')
            p1 = i;
         i++;
      }
      if(p1 < p3){
         cout<<13<<endl;
      }
      else{
         cout<<31<<endl;
      }
   }
   return 0;
}