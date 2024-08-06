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
      ll sum = 0;
      int n, x;
      cin>>n;
      for(int i=0; i<n; i++){
         cin>>x;
         sum += abs(x);
      }
      cout<<sum<<endl;
   }
   return 0;
}