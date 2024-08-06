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
      int x, k, temp, sum = 0, f = 1, i = 0;
      cin>>x>>k;
      while(f){
         temp = x + i;
         sum = 0;
         while(temp){
            sum += temp % 10;
            temp /= 10;
         }
         if(sum % k == 0){
            cout<<x+i<<endl;
            break;
         }
         i++;
      }
      // int s = x%10;
      // sum %= k;
      // // cout<<sum<<endl;
      // if(sum)
      //    // if(k == 10)
      //       // cout<<x + (k - (sum + 1))<<endl;
      //    // else
      //    if(s +  k - sum >= 10)
      //       cout<<x + (k - sum)<<endl;
      // else
      //    cout<<x<<endl;
   }
   return 0;
}