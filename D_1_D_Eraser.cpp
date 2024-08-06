#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k, count = 0;
      string s;
      cin>>n>>k>>s;
      for(int i=0; i<n;){
         if(s[i] == 'B'){
            int j = 0;
            while(j<k){
               j++;
               i++;
            }
            count++;
         }
         else i++;
      }
      cout<<count<<endl;
   }
   return 0;
}