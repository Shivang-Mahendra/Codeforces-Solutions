#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--) {
      string s;
      int p, sum = 0;
      cin >> s >> p;
      int len = s.length();
      for(int i=0; i<len; i++){
         sum += (s[i] - 96);
      }
      if(sum <= p){
         cout << s << endl;
      }
      else{
         string str = s, ans="";
         sort(s.begin(),s.end());
         while(s.length() >= 1 && sum > p){
            char ch = s[s.length()-1];
            sum -= (ch-96);
            s.erase(s.length()-1,1);
         }
         vector<int> count (26,0);
         for(int i=0; i<s.length(); i++){
            count[s[i]-97]++;
         }
         for(int i=0; i<len; i++){
            if(count[str[i]-97]>=1){
               ans += str[i];
               count[str[i]-97]--;
            }
         }
         cout<< ans << endl;
      }
   }
   return 0;
}