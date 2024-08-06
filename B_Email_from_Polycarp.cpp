#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s1, s2;
      cin>>s1>>s2;
      int  i = 0, j = 0, n = s2.size(), f = 0, m = s1.size();
      while(i < n){
         if(j < m  && s2[i] == s1[j]){
            j++;
            i++;
         }
         else if (i && s2[i] == s2[i-1])
            i++;
         else{
            f = 1;
            // cout<<"NO"<<endl;
            break;
         }
      }
      if(!f && j == m){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}