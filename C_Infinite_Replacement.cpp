#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin >> T;
   while(T--){
      string s,t;
      cin>>s>>t;
      int cnt_a = 0;
      for (int i = 0; i < s.length(); i++)
      {
         if (s[i] == 'a')
         {
            cnt_a++;
         }
      }
      if(t == "a" || cnt_a == 0){
         cout << 1 << endl;
      }
      else if(find(t.begin(), t.end(), 'a') != t.end()) {
         cout << -1 << endl;
      }
      else{
         cout << (long long)pow(2,cnt_a) << endl;
      }
   }
   return 0;
}