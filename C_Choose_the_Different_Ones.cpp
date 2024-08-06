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
      int n,m,k,x;
      cin>>n>>m>>k;
      unordered_set<int> s1,s2;
      map<int,int> mp;
      for(int i=0; i<n; i++){
         cin>>x;
         if(x<=k)
            s1.insert(x);
      }
      for (int i = 0; i < m; i++)
      {
         cin >> x;
         if (x <= k)
            s2.insert(x);
      }
      if(s1.size()<k/2 || s2.size()<k/2){
         cout<<"NO"<<endl;
         continue;
      }
      unordered_set<int>::iterator itr;
      for (itr = s1.begin(); itr != s1.end(); itr++){
         x = *itr;
         mp[x]++; 
      }
      for (itr = s2.begin(); itr != s2.end(); itr++){
         x = *itr;
         mp[x]++;
      }
      int flag = 0;
      for(int i=1; i<=k; i++){
         if(mp[i] == 0){
            flag = 1;
            break;
         }
      }
      if(flag)
         cout<<"NO"<<endl;
      else  
         cout<<"YES"<<endl;
   }
   return 0;
}