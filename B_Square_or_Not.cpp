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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int r = sqrt(n);
      if(r*r == n){
         bool flag = true;
         // cout<<n<<endl;
         for(int i=0; i<n; i++){
            // cout << i << endl;
            if((i/r == 0) || (i/r == r-1)){
               if(s[i] != '1'){
                  flag = false;
                  break;
               }
            }
            else{
               // cout<<2<<" "<<i<<endl;
               if((i%r == 0 || (i+1)%r == 0) && s[i] == '0'){
                  flag = false;
                  break;
               }
               else if(i%r != 0 && (i+1)%r != 0 && s[i] == '1'){
                  flag = false;
                  break;
               }
            }
         }
         if(flag){
            cout<<"Yes\n";
         }
         else{
            cout<<"No\n";
         }
      }
      else{
         cout<<"No"<<endl;
      }
   }
   return 0;
}