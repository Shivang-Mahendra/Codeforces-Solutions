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
      int x = 2, n, mx = 0, ans = 2 ;
      cin>>n;
      for(x=2; x<=n; x++){
         int temp = 0, j = 1;
         while(j*x<=n){
            temp += (j*x);
            j++;
         }
         if(mx < temp){
            mx = temp;
            ans = x;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}