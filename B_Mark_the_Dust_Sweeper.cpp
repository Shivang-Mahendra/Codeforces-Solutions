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
      int n, i = 0; ll sum = 0;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++) cin>>v[i];
      while(i<n && v[i] == 0)
         i++;
      for(; i<n-1; i++){
         if(v[i] != 0){
            sum += v[i];
         }
         else{
            sum++;
         }
      }
      cout<<sum<<endl;
   }
   return 0;
}