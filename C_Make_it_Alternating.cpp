#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int n = s.size(), count = 0, ways = 0;
      for(int i=0; i<n;){
         char te = s[i], temp = 0;
         while(i<n && s[i] == te){
            i++;
            temp++;
         }
         if(temp>1)
            ways += temp;
         temp--;
         count += temp;
      }
      cout<<count<<" "<<ways<<" ";
      if(ways <= 1)
         cout<<1<<endl;
      else
         cout<<ways * (ways - 1) - ways<<endl;
   } 
   return 0;
}