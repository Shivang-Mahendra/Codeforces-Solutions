#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      if(s.size() < 3){
         cout<<"NO"<<endl;
         continue;
      }
      if(s[0] != '1' || s[1] != '0' || s[2] == '0'){
         cout<<"NO"<<endl;
         continue;
      }
      string t = s.substr(2, s.size());
      int n = stoi(t);
      // cout<<n<<endl;
      if(n >= 2)
         cout<< "YES" << endl;
      else  
         cout<<"NO\n";
   }
   return 0;
}