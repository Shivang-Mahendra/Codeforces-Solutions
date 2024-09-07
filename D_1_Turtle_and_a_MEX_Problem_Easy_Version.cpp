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
      int n, m;
      cin>>n>>m;
      set<int> st;
      int mex2 = 0;
      for(int i=0; i<n; i++){
         int len;
         cin>>len;
         while(len--){
            int a;
            cin>>a;
            st.insert(a);
         }
         int j = 0, f = 0;
         while(1){
            if(st.find(j) == st.end()){
               if(!f) f = 1;
               else{
                  mex2 = max(mex2, j);
                  break;
               }
            }
            j++;
         }
         st.clear();
      }
      if(mex2 >= m){
         cout<<(m+1)*mex2<<endl;
      }
      else{
         cout<<(mex2+1)*mex2 + (m * (m+1))/2 - (mex2*(mex2+1))/2<<endl;
      }
   }
   return 0;
}