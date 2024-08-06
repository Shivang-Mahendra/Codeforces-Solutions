#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s, an = "";
      cin>>s;
      int len = s.length(), cnt1 = 0;
      for(int i=0; i<len; i++){
         if(s[i] == '1'){
            cnt1++;
         }
      }
      if(cnt1 == 0){
         cout << 0 << endl;
      }
      else if(s == "1"){
         cout << 1 << endl ;
      }
      else if(len == cnt1){
         cout << len*len << endl;
      }
      else{
         cnt1 = 1;
         int cnt = 0;
         an += s[len-1];
         for(int i=0; i<len-1; i++){
            an += s[i];
         }
         for(int i=0; i<len; i++){
            int temp = 0;
            while (i < len && (s[i] == '1' && an[i] == '1'))
            {
               i++;
               temp++;
            }
            if(temp > cnt ){
               cnt = temp;
            }
         }
         cout<< max(cnt1,(cnt*2)) << endl;
      }
   }
   return 0;
}