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
      vector<int> v(n), a, b;
      for(int i=0;i<n; i++){
         cin>>v[i];
      }
      sort(all(v));
      int i = 0, j = n-1;
      while(i<=j){
         if(i == j){
            a.pb(v[i]);
            b.pb(v[j]);
         }
         else{
            a.pb(v[i]);
            a.pb(v[j]);
            b.pb(v[j]);
            b.pb(v[i]);
         }
         i++;
         j--;
      }
      int s1 = a[0] + a[1], s2 = b[0] + b[1];
      int f1 = 0, f2 = 0;
      for(int i=1; i<n-1; i++){
         if(a[i] + a[i+1] != s1)
            f1 = 1;
         if(b[i] + b[i+1] != s2)
            f2 = 1;
      }
      if(f1 && f2)
         cout<<"NO"<<endl;
      else
         cout<<"YES"<<endl;
   }
   return 0;
}