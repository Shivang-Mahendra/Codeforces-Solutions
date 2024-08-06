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
      string s,c;
      cin>>n>>m>>s;
      vector<int> v(m);
      for(int i=0; i<m; i++){
         cin>>v[i];
         v[i]--;
      }
      cin>>c;
      sort(v.begin(), v.end());
      sort(c.begin(), c.end());
      int j = 0, i = 0;
      while(i<m){
         s[v[i]] = c[j];
         j++;
         int temp = v[i];
         i++;
         while(i<m && v[i] == temp){
            i++;
         }
      }
      cout<<s<<endl;
   }
   return 0;
}