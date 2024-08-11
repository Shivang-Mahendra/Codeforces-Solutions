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
      vector<int> a(n), b(n);
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      for(int i=0; i<n; i++){
         cin>>b[i];
      }
      bool f1 = true, f2 = true;
      int l = 0, r = n-1;
      for(int i=0; i<n; i++){
         if(a[i] != b[l] && a[i] != b[r]){
            f1 = false;
            break;
         }
         else if(a[i] == b[l])
            l++;
         else  
            r--;
      }
      l=0, r=n-1;
      for(int i=n-1; i>=0; i--){
         if (a[i] != b[l] && a[i] != b[r]){
            f2 = false;
            break;
         }
         else if (a[i] == b[l])
            l++;
         else
            r--;
      }
      if(f1 && f2){
         cout<<"Bob"<<endl;
      }
      else{
         cout<<"Alice"<<endl;
      }
   }
   return 0;
}