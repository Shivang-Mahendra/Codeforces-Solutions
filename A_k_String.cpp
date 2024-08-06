#include<bits/stdc++.h>
using namespace std;
int main(){
   int k;
   string str,ans = "";
   cin >> k >> str;
   if(k==1){
      cout << str;
      return 0;
   }
   int len = str.length();
   if(len%k!=0){
      cout<< -1 ;
      return 0;
   }
   int sub_len = len/k, flag = 0;
   vector<int> count(26);
   for(int i = 0; i < len; i++){
      count[str[i] - 97]++;
   }
   for(int i = 0; i < 26; i++){
      if(count[i] % k != 0){
         cout<< -1;
         return 0;
      }
   }
   string temp = "";
   for(int i=0; i < 26; i++){
      int times = count[i] / k;
      while(times--){
         temp += char(97 + i);
      }
   }
   while(ans.length() < len){
      ans += temp;
   }
   cout << ans;
   return 0;
}