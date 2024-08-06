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
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      
      //TLE 
      // vector<vector<int>> tri(n-2, vector<int> (3));
      // for(int i=0; i<n-2; i++){
      //    tri[i][0] = v[i];
      //    tri[i][1] = v[i+1];
      //    tri[i][2] = v[i+2];
      // }
      // // for(int i=0; i<n-2; i++){
      // //    cout<<tri[i][0]<<" "<<tri[i][1]<<" "<<tri[i][2]<<endl;
      // // }
      // int ans = 0;
      // for(int i=0; i<n-3; i++){
      //    for(int j=i+1; j<n-2; j++){
      //       if(tri[i][0] == tri[j][0] && tri[i][1] == tri[j][1] && tri[i][2] != tri[j][2]){
      //          ans++;
      //       }
      //       else if (tri[i][0] == tri[j][0] && tri[i][1] != tri[j][1] && tri[i][2] == tri[j][2]){
      //          ans++;
      //       }
      //       else if (tri[i][0] != tri[j][0] && tri[i][1] == tri[j][1] && tri[i][2] == tri[j][2])
      //       {
      //          ans++;
      //       }
      //    }
      // }
      // cout<<ans<<endl;

      map<array<int, 2>, vector<int>> mf, mm, ml;
      for(int i=0; i<n-2; i++){
         int t1 = v[i], t2 = v[i+1], t3 = v[i+2];
         mf[{t1, t2}].push_back(t3);
         mm[{t2, t3}].push_back(t1);
         ml[{t3,t1}].push_back(t2);
      }
      int ans = 0;
      for(auto it: mf){
         map<int, int> m;
         for(auto i:it.second){
            m[i]++;
         }
         int temp = 0, n1 = it.second.size();
         for(auto i : it.second){
            temp += (n1 - m[i]);
         }
         temp /= 2;
         ans += temp;
      }
      for (auto it : mm)
      {
         map<int, int> m;
         for (auto i : it.second)
         {
            m[i]++;
         }
         int temp = 0, n1 = it.second.size();
         for (auto i : it.second)
         {
            temp += (n1 - m[i]);
         }
         temp /= 2;
         ans += temp;
      }
      for (auto it : ml)
      {
         map<int, int> m;
         for (auto i : it.second)
         {
            m[i]++;
         }
         int temp = 0, n1 = it.second.size();
         for (auto i : it.second)
         {
            temp += (n1 - m[i]);
         }
         temp /= 2;
         ans += temp;
      }
      cout<<ans<<endl;
   }
   return 0;
}