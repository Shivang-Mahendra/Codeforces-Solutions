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
      cin>>n;
      string s;
      cin>>s;
      int fu = 0;
      for(int i=0; i<n; i++){
         if(s[i] == 'U')
            fu++;
      }
      if(fu%2 == 1){
         cout<<"YES"<<endl;
      }
      else  
         cout<<"NO"<<endl;
   }
   return 0;
}