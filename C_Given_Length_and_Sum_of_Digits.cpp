#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int n, sum;
   cin>>n>>sum;
   if(sum > 9*n){
      cout<<-1<<" "<<-1<<endl;
      return 0;
   }
   if(sum == 0){
      if(n == 1){
         cout<<0<<" "<<0<<endl;
      }
      else{
         cout<<-1<<" "<<-1<<endl;
      }
      return 0;
   }
   string s = "";
   while(sum > 0){
      if(sum > 9){
         s += '9';
         sum -= 9;
      }
      else{
         s +=('0' + sum);
         sum = 0;  
      }
   }
   int l = n - s.size(), i = 0;
   while(i < l){
      s += '0';
      i++;
   }
   string t = s;
   reverse(all(t));
   if(t[0] == '0'){
      t[0] = '1';
      i = 1;
      while(i<n && t[i] == '0'){
         i++;
      }
      t[i] -= 1;
   }
   cout<<t<<" "<<s<<endl;
   return 0;
}