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
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      string s="";
      map<int,int> m;
      for(int i=0; i<n; i++){
         // if(m[v[i]] == 0){
            s += ('a' + m[v[i]]);
            m[v[i]]++;
         // }
      }
      cout<<s<<endl;
   }
   return 0;
}