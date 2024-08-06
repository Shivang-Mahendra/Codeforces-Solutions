#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      string s;
      cin>>n>>s;
      if(n == 2){
         cout<<s<<endl;
      }
      else if(n == 3){
         if(s[0] == '0' || s[2] == '0'){
            cout<<'0'<<endl;
            continue;
         }
         else{
            int t1 = ((s[0]-'0')*10+(s[1]-'0'));
            int t2 = s[2] - '0';
            int t3 = s[0] - '0';
            int t4 = ((s[1] - '0') * 10 + (s[2] - '0'));
            cout<<min({t1+t2, t1*t2, t3+t4, t3*t4})<<endl;
         }
      }
      else{
         int z = 0;
         for(auto it : s){
            if(it == '0'){
               z++;
            }
         }
         if(z){
            cout<<0<<endl;
         }
         else{
            
         }
      }
   }
   return 0;
}