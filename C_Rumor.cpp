#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int bfs(int src, vector<vector<int>>& graph, vector<int>& costs, vector<int>& vis){
   queue<pair<int, int>> q;
   q.push({src, -1});
   int mn = INT_MAX;
   while(!q.empty()){
      int node = q.front().first;
      int par = q.front().second;
      q.pop();
      mn = min(costs[node], mn);
      vis[node] = 1;
      for(auto it : graph[node]){
         if(!vis[it] && it != par){
            q.push({it, node});
         }
      }
   }
   return mn;
}
signed main(){
   int n, m;
   cin>>n>>m;
   vector<int> costs(n);
   for(int i=0; i<n; i++){
      cin>>costs[i];
   }
   vector<vector<int>> graph(n);
   for(int i=0; i<m; i++){
      int u,v;
      cin>>u>>v;
      u--; v--;
      graph[u].push_back(v);
      graph[v].push_back(u);
   }
   vector<int> vis(n, 0);
   int ans = 0;
   for(int i=0; i<n; i++){
      if(!vis[i]){
         ans += bfs(i, graph, costs, vis);
      }
   }
   cout<<ans<<endl;
   return 0;
}