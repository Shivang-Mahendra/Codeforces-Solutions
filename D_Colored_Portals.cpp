#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
// int dijikstra(vector<vector<int>>& gr, int u, int v){
//    int n = gr.size();
//    vector<int> dis(n, 1e9);
//    set<pair<int, int>> st;
//    dis[u] = 0;
//    st.insert({0, u});
//    while(!st.empty()){
//       auto it = *(st.begin());
//       int node = it.second;
//       int d = it.first;
//       st.erase(it);
//       for(int i=0; i<n; i++){
//          if(i!=node && gr[node][i] < 1e9 && d+gr[node][i] < dis[i]){
//             if(dis[i] != 1e9){
//                st.erase({dis[i], i});
//             }
//             dis[i] = gr[node][i] + d;
//             st.insert({dis[i], i});
//          }
//       }
//    }
//    return dis[v];
// }
signed main(){
   int t;
   cin>>t;
   vector<string> col = {"BG", "BR", "BY", "GR", "GY", "RY"};
   while(t--){
      int n, qs;
      cin>>n>>qs;
      vector<string> s(n);
      vector<vector<int>> gr(6);
      for(int i=0; i<n; i++){
         cin>>s[i];
      }
      for(int i=0; i<n; i++){
         if(s[i] == "BG") gr[0].pb(i);
         if(s[i] == "BR") gr[1].pb(i);
         if(s[i] == "BY") gr[2].pb(i);
         if(s[i] == "GR") gr[3].pb(i);
         if(s[i] == "GY") gr[4].pb(i);
         if(s[i] == "RY") gr[5].pb(i);
      }
      while(qs--){
         int u, v;
         cin>>u>>v;
         u--; v--;
         set<char> st;

         //to check if the two cities hav anything in common
         for(auto ch : s[u])  st.insert(ch);
         for(auto ch : s[v])  st.insert(ch);

         if(st.size() < 4){ //some common portal in citites
            cout<<abs(v - u)<<endl;
            continue;
         }
         else{
            // no common portal so we find 3 node to connect them 
            if(v < u)  swap(u, v);
            int l = -1, r = n;
            for(int k=0; k<6; k++){
               if(s[u] == col[k] || s[v] == col[k]){
                  continue;
               }

               auto it = lower_bound(gr[k].begin(), gr[k].end(), u);
               if(it != gr[k].begin()){
                  it--;
                  l = max(l, *it);
               }
               it = upper_bound(gr[k].begin(), gr[k].end(), u);
               if(it != gr[k].end()){
                  r = min(r, *it);
               }
            }
            if (l == -1 && r == n)
            {
               cout << -1 << endl;
            }
            else if (l == -1)
            {
               cout << abs(u - r) + abs(v - r) << endl;
            }
            else if (r == n)
            {
               cout << abs(u - l) + abs(v - l) << endl;
            }
            else
            {
               int ans = min(abs(u - l) + abs(v - l), abs(u - r) + abs(v - r));
               cout << ans << endl;
            }
         }
      }
      // vector<vector<int>> gr(n, vector<int> (n,1e9));
      // for(auto it : mp){
      //    vector<int> te = it.second;
      //    for(int i=0; i<te.size(); i++){
      //       for(int j=i+1; j<te.size(); j++){
      //          gr[te[i]][te[j]] = abs(te[i] - te[j]);
      //          gr[te[j]][te[i]] = abs(te[j] - te[i]);
      //       }
      //    }
      // }
      // Floyd Warshall
      // for(int k=0; k<n; k++){
      //    for(int i=0; i<n; i++){
      //       for(int j=0; j<n; j++){
      //          if(i!=j && j!=k && i!=k && gr[i][j] > gr[i][k] + gr[k][j]){
      //             gr[i][j] = gr[i][k] + gr[k][j];
      //          }
      //       }
      //    }
      // }
      // for(int i=0; i<n; i++)  gr[i][i] = 0;
      // for(int i=0; i<qs; i++){
      //    int u,v;
      //    cin>>u>>v;
      //    u--;v--;
      //    // int ans = dijikstra(gr, u, v);
      //    // if(ans >= 1e9){
      //    //    cout<<"-1"<<endl;
      //    // }
      //    // else{
      //    //    cout<<ans<<endl;
      //    // }
      //    if (gr[u][v] >= 1e9)
      //    {
      //       cout<<"-1"<<endl;
      //    }
      //    else{
      //       cout<<gr[u][v]<<endl;
      //    }
      // }
   }
   return 0;
}