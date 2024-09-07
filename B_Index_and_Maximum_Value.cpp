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
      int n, q;
      cin>>n>>q;
      vector<int> v(n);
      for(int i=0; i<n; i++)  cin>>v[i];
      int mx = *max_element(v.begin(), v.end());
      while(q--){
         char ch;
         cin>>ch;
         int l, r;
         cin>>l>>r;
         if(l<=mx && r>=mx){
            if(ch == '+')
               mx++;
            else
               mx--;
         }
         cout<<mx<<" ";
      }
      cout<<endl;
   }
   return 0;
}