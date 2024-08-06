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
      vector<int> a(n), b(n-1);
      for(int i=0; i<n-1; i++)   cin>>b[i];
      a[0] = b[0] + 1;
      for(int i=1; i<n-1; i++){
         a[i] = a[i-1] + b[i-1];
         if(a[i] <= b[i]){
            a[i] = b[i]*a[i-1] + b[i-1];
         }
      }
      a[n-1] = a[n-2] + b[n-2];
      for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}