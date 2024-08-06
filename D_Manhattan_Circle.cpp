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
      vector<vector<char>> grid(n, vector<char> (m));
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            cin>>grid[i][j];
         }
      }
      int x=-1,y=-1;
      for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
            if(grid[i][j] == '#'){
               if(x==-1 || (x<i && y>j)){
                  x = i;
                  y = j;
                  // cout<<x<<" "<<y<<endl;
               }
            }
         }
      }
      int cnt = 0;
      for(int j=0; j<m; j++){
         if(grid[x][j] == '#')
            cnt++;
      }
      cnt = cnt/2;
      // int i = 0;
      // while(i <= cnt){
      //    y++;
      //    i++;
      // }
      y += cnt;
      cout<<x+1<<" "<<y+1<<endl;
   }
   return 0;
}