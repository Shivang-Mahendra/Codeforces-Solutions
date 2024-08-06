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
      int n, f = 0;
      cin>>n;
      ll sum = 0LL;
      vector<ll> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
         sum += v[i];
      }
      if(n == 1){
         cout<<"YES"<<endl;
         continue;
      }
      sum = (sum / (n*1LL));
      //cout<<sum<<endl;
      ll left = 0LL;
      for(int i=0; i<n; i++){
         if(v[i] >= sum){
            left += (v[i] - sum);
         }
         else{
            if(left >= (sum - v[i])){
               left -= (sum - v[i]);
            }
            else{
               f = 1;
               break;
            }
         }
      }
      if (!f)
         cout << "YES" << endl;
      else
         cout<<"NO"<<endl;
   }
   return 0;
}