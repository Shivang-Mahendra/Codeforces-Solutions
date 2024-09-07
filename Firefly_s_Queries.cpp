#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int unsigned long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007

signed main(){
   int t;
   cin>>t;
   while(t--){
      int n,q;
      cin>>n>>q;
      vector<int> v(n);
      for(int i=0; i<n; i++){ 
         cin>>v[i];
      }
      vector<int> prefixSum(n, 0);
      prefixSum[0] = v[0];
      for(int i= 1; i<n; i++)
         prefixSum[i] = prefixSum[i-1] + v[i];
      while(q--){
         int l,r;
         cin>>l>>r;
         l--; r--;
         int sb = l/n, eb = r/n;
         // l %= n;
         // r %= n;
         int ans = 0;
         if(sb == eb){
            int si = l%n + sb%n ; // si -> start index
            si %= n;
            int ei = si + (r - l);  //ei -> end index
            ei %= n;
            // cout<<si<<" "<<ei<<endl;
            if(ei < si){
               ans += prefixSum[n-1] - prefixSum[si-1];
               ans += prefixSum[ei];
            }
            else{
               if(si){
                  ans += prefixSum[ei] - prefixSum[si - 1];
               }
               else{
                  ans += prefixSum[ei];
               }
            }
         }
         else if(eb > sb){
            ans = (eb - sb - 1) * prefixSum[n-1];
            int elements = ((sb+1) * n) - 1 - l; 
            int si = l%n + sb%n;
            si %= n;
            int ei = si + elements;
            ei %= n;
            if(ei < si){
               ans += prefixSum[n-1] - prefixSum[si - 1];
               ans += prefixSum[ei];
            }
            else{
               if(si)   
                  ans += prefixSum[ei] - prefixSum[si - 1];
               else
                  ans += prefixSum[ei];
            }
            // cout<<ans<<" 2"<<endl;
            elements = r - (eb * n);
            ei = r%n + eb%n;
            ei %= n;
            // cout<<ei<<endl;
            si = r - elements + eb%n;
            si %= n;
            // cout<<si<<endl;
            if (ei < si)
            {
               ans += prefixSum[n-1] - prefixSum[si - 1];
               ans += prefixSum[ei];
            }
            else
            {
               if (si)
                  ans += prefixSum[ei] - prefixSum[si - 1];
               else
                  ans += prefixSum[ei];
            }
         }
         cout<<ans<<endl;
      }
   }
   return 0;
}