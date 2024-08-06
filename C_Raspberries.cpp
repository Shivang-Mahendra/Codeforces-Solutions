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
      int n, k;
      cin>>n>>k;
      vector<int> v(n);
      for(int i=0; i<n; i++) cin>>v[i];
      if(k == 2){
         int e = 0, o = 0;
         for(int i=0; i<n; i++){
            if(v[i]&1)
               o++;
            else
               e++;
         } 
         if(e)
            cout<<0<<endl;
         else
            cout<<1<<endl;
      }
      else if(k == 3){
         int ans = 2,f = 0;
         for (int i = 0; i < n; i++)
         {
            v[i] = v[i] % 3;
            if (v[i] == 0)
            {
               f = 1;
               break;
            }
            else
            {
               ans = min(ans, 3 - v[i]);
            }
         }
         if(f)
            cout<<0<<endl;
         else{
            cout<<ans<<endl;
         }
      }
      else if(k == 4){
         int e = 0, o = 0, f = 0, ans = 3;
         for (int i = 0; i < n; i++){
            if (v[i]%2 == 1)
               o++;
            else
               e++;
         }
         for(int i=0; i<n; i++){
            v[i] = v[i]%4;
            if(v[i] == 0){
               f=1;
               break;
            }
            else{
               ans = min(ans, 4-v[i]);
            }
         }
         if(f || e>=2)
            cout<<0<<endl;
         else if(e >= 1 && o >=1){
            cout<<1<<endl;
         }
         else if(o>=2)
            cout<<min(ans, 2)<<endl;
         else
            cout<<ans<<endl;
      }
      else{
         int f = 0, ans = 4; 
         for(int i =0; i<n; i++){
            v[i] = v[i]%k;
            if(v[i] == 0){
               f=1;
               break;
            }
            else{
               ans = min(ans, 5 - v[i]);
            }
         }
         if(f)
            cout<<0<<endl;
         else{
            cout<<ans<<endl;
         }
      }
   }
   return 0;
}