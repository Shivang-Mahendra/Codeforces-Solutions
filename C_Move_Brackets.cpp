#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,cnt_open=0,cnt_close=0;
      cin>>n;
      string str;
      cin>>str;
      for(int i=0; i<n; i++){
         if(str[i] == '('){
            cnt_open++;
         }
         else if(cnt_open>0){
            cnt_open--;
         }
         else{
            cnt_close++;
         }
      }
      cout<<min(cnt_open,cnt_close)<<endl;
   }
   return 0;
}