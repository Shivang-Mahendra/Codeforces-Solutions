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
      vector<int> v(n);
      for(int i=0; i<n; i++) cin>>v[i];
      int i = 0, j = n - 1, ans = 0;
      while(i<n && v[i] == 0){
         i++;
      }  
      while(j>=0 && v[j] == 0){
         j--;
      }
      while(i<j){
         if(v[i] == 0)
            ans++;
         i++;
      }
      cout<<ans<<endl;
   }
   return 0;
}