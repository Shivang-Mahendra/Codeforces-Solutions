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
      ll n, k;
      cin>>n>>k;
      vector<pair<ll, ll>> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i].second;
      }
      for(int i=0; i<n; i++){
         cin>>a[i].first;
         if(a[i].first < 0)
            a[i].first = -a[i].first;
      }
      sort(all(a));
      ll h = 0, f= 0;
      for(int i = 0; i<n; i++){
         h += a[i].second;
         int d = h/k;
         if(h%k) d++;
         if(a[i].first < d){
            f=1;
            break;
         }
      }
      // ll moves = 0, left = 0, f = 0;
      // for(int i=0; i<n; i++){
      //    if(a[i].second <= left){
      //       left -= a[i].second;
      //    }
      //    else if(k * (a[i].first - moves) + left >= a[i].second){
      //       if(left > a[i].second){
      //          left -= a[i].second;
      //       } 
      //       else{
      //          moves += (a[i].second - left) / k;
      //          if((a[i].second - left) % k){
      //             moves++;
      //             left = k - ((a[i].second - left) % k);
      //          }
      //          // cout<<moves<<' '<<left<<endl;
      //       }
      //    }
      //    else{
      //       f = 1;
      //       break;
      //    }
      // }
      if(f)
         cout<<"NO"<<endl;
      else  
         cout<<"YES"<<endl;
   }
   return 0;
}