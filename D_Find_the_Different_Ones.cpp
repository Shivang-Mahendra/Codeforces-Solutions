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
      int n,x,q,s=0,l=0;
      cin>>n;
      vector<pair<int,int>> v;
      unordered_map<int,int> m;
      for(int i=0; i<n; i++){
         cin>>x;
         if(v.back().first != x || v.size() == 0){
            v.pb(make_pair(x,i));
            m[s] = l;
            s=l=i+1;
         }
         else
            l++;
      }
      for(auto it:v){
         cout<<it.first<<" "<<it.second<<endl;
      }
      m[s] = l;
      cin>>q;
      for(int i=0; i<q; i++){
         cin>>s>>l;
         s--;
         l--;
         int flag = 0;
         for(auto it : m){
            if(it.first<=s && it.second>=l){
               flag = 1;
               break;
            }
         }
         if(flag){
            cout<<-1<<" "<<-1<<endl; 
            break;
         }
         for(int i=0; i<v.size(); i++){
            if(v[i].second>=s && v[i+1].second<=l){
               cout<<v[i].second+1<<" "<<v[i+1].second + 1<<endl;
               break;
            }
         }
      }
   }
   return 0;
}