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
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      long long ans = 0L;
      for(int i=1; i<n; i++){
         if(n%i == 0){
            vector<long long> temp;
            long long te = 0;
            for(int j=0; j<n; j++){
               if((j+1) % i == 0){
                  te += v[j];
                  temp.pb(te);
                  te = 0;
               }
               else{
                  te += v[j];
               }
            }
            ans = max(ans, *max_element(all(temp)) - *min_element(all(temp)));
         }
      }
      cout<<ans<<endl;
      // cout<<*max_element(all(v)) - *min_element(all(v)) << endl;;
   }
   return 0;
}