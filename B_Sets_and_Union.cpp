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
      int n, mx = 0;
      cin>>n;
      vector<unordered_set<int>> v(n);
      unordered_set<int> u;
      for(int i=0; i<n; i++){
         int k;
         cin>>k;
         unordered_set<int> s;
         for(int j=0; j<k; j++){
            int x;
            cin>>x;
            s.insert(x);
            u.insert(x);
         }
         v[i] = s;
      }
      for(int i : u){
         set<int> s;
         for(int j=0; j<n; j++){
            if(v[j].find(i) == v[j].end()){
               for(int k : v[j])
                  s.insert(k);
            }
         }
         mx = max(mx, (int)s.size());
      }
      cout<<mx<<endl;
   }
   return 0;
}