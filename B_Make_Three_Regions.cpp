#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<vector<char>> v(2, vector<char>(n));
      for(int i=0; i<2; i++){
         for(int j=0; j<n; j++){
            cin>>v[i][j];
         }
      }
      int ans = 0;
      for(int j=1; j<n-1; j++){
         if(v[0][j] == '.'){
            int temp = 0;
            if(v[0][j-1] == '.' && v[1][j-1] == 'x') temp++;
            if(v[0][j+1] == '.' && v[1][j+1] == 'x') temp++;
            if(v[1][j] == '.') temp++;
            if(temp == 3)  ans++;
         }
      }
      for (int j = 1; j < n - 1; j++){
         if (v[1][j] == '.'){
            int temp = 0;
            if (v[1][j - 1] == '.' && v[0][j-1] == 'x') temp++;
            if (v[1][j + 1] == '.' && v[0][j+1] == 'x') temp++;
            if (v[0][j] == '.') temp++;
            if (temp == 3) ans++;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}