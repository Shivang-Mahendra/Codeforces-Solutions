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
      vector<vector<int>> v(n, vector<int> (m));
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cin>>v[i][j];
         }
      }
      bool flag = false;
      while(!flag){
         int temp = 0;
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               int c = 0, w = 0, mx = INT_MIN;
               if(i-1>=0){
                  w++;
                  if(v[i-1][j] < v[i][j]){
                     c++;
                     mx = max(mx, v[i-1][j]);
                  }
               }
               if (j - 1 >= 0)
               {
                  w++;
                  if (v[i][j-1] < v[i][j]){
                     c++;
                     mx = max(v[i][j-1], mx);
                  }
               }
               if (i + 1 < n)
               {
                  w++;
                  if (v[i+1][j] < v[i][j])
                  {
                     c++;
                     mx = max(v[i+1][j], mx);
                  }
               }
               if (j + 1 < m)
               {
                  w++;
                  if (v[i][j + 1] < v[i][j])
                  {
                     c++;
                     mx = max(v[i][j + 1], mx);
                  }
               }
               if(c == w){
                  v[i][j] = mx;
                  temp = 1;
                  break;
               }
            }
            if(temp == 1){
               break;
            }
         }
         if(temp == 0)
            flag = !flag; 
      }
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
         }
         cout<<endl;
      }
   }
   return 0;
}