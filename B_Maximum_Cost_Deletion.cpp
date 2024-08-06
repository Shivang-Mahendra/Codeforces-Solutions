#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int l,a,b;
      string str;
      cin>>l>>a>>b>>str;
      int cost=a*l;
      if(b>=0){
         cost+=(b*l);
      }
      else{
         int groups = 1;
         for(int i=0; i<l-1; i++){
            if(str[i]!=str[i+1]){
               groups++;
            }
         }
         cost += (((groups/2)+1)*b); 
      }
      cout<<cost<<endl;
   }
   return 0;
}