#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int findPar(int i, vector<int>& par){
   if(i == par[i])
      return i;
   else  return par[i] = findPar(par[i], par);
}
void Union(int i, int j, vector<int>& par , vector<int>& rank){
   int pi = findPar(i, par);
   int pj = findPar(j, par);
   if(rank[pi] >= rank[pj]){
      par[pj] = pi;
      rank[pi] += rank[pj];
   }
   else{
      par[pi] = pj;
      rank[pj] += rank[pi];
   }
}
signed main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i];
         v[i]--;
      }
      string s;
      cin>>s;
      
      vector<int> par(n), rank(n, 0);
      for(int i=0; i<n; i++){
         par[i] = i;
         if(s[i] == '0')
            rank[i]++;
      }

      vector<int> ans(n);
      for(int i=0; i<n; i++){
         int j = v[i];
         if(findPar(i, par) != findPar(j, par)){
            Union(i, j, par, rank);
         } 
         // vector<int> vis(n, 0);
         // int b = 0;
         // int j = v[i-1];
         // while(vis[j-1] == 0 && b != tb){
         //    vis[j-1] = 1;
         //    if(s[j-1] == '0'){
         //       b++;
         //    }
         //    j = v[j-1];
         // }
         // ans.push_back(b);
      }
      for(int i=0; i<n; i++){
         ans[i] = rank[findPar(i, par)];
      }
      for(auto it : ans){
         cout<<it<<" ";
      }
      cout<<endl;
   }
   return 0;
}