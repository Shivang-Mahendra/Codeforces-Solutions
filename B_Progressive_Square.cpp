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
      int n,c,d;
      cin>>n>>c>>d;
      vector<int> nums(n*n);
      for(int i=0; i<n*n; i++)   cin>>nums[i];
      int a = *min_element(all(nums));
      vector<vector<int>> v(n,vector<int> (n));
      unordered_map<int,int> m;
      for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            if(j){
               v[i][j] = v[i][j-1] + d;
               m[v[i][j]]++;
            }
            else{
               if(i){
                  v[i][j] = v[i-1][j] + c;
                  m[v[i][j]]++;
               }
               else{
                  v[i][j] = a;
                  m[v[i][j]]++;
               }
            }
            }
         }
      for(int i=0; i<n*n; i++)
         m[nums[i]]--;
      int flag = 0;
      for(auto it : m){
         if(it.second != 0){
            cout<<"NO"<<endl;
            flag =1;
            break;
         }
      }
      if(!flag){
         cout<<"YES"<<endl;
      }
   }
   return 0;
}