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
      int n,m;
      cin>>n>>m;
      if(n == 1 && m == 1){
         int x;
         cin>>x;
         cout<<-1<<endl;
         continue;
      }
      else if(m > 1){
         vector<int> v(m);
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               cin>>v[j];
            }
            for(int j=1; j<m; j++){
               cout<<v[j]<<" ";
            }
            cout<<v[0]<<endl;
         }
      }
      else{
         vector<int> v(n);
         for(int i=0; i<n; i++){
            cin>>v[i];
         }
         for(int i=1; i<n; i++){
            cout<<v[i]<<endl;
         }
         cout<<v[0]<<endl;
      }
   }
   return 0;
}