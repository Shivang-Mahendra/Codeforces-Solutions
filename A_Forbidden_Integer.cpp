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
      int n,k,x, ans = -1, ans1 = -1;
      cin>>n>>k>>x;
      if(x != 1){
         cout << "YES" << endl;
         cout << n << endl;
         int sum = 0;
         while (sum < n)
         {
            cout << 1 << " ";
            sum += 1;
         }
         cout << endl;
      }
      else if(x != 2 && k >= 2 && n%2 == 0){
         cout << "YES" << endl;
         cout << n/2 << endl;
         int sum = 0;
         while (sum < n)
         {
            cout << 2 << " ";
            sum += 2;
         }
         cout << endl;
      }
      else if(x != 3 && k >= 3){
         cout << "YES" << endl;
         cout << n / 2 << endl;
         cout<<3<<" ";
         int sum = 3;
         while (sum < n)
         {
            cout << 2 << " ";
            sum += 2;
         }
         cout << endl;
      }
      else{
         cout<<"NO"<<endl;
      }
      // for(int i = 1; i<=k; i++){
      //    if(n%i == 0 && i != x){
      //       ans = i;
      //       break;
      //    }
      //    else if(i != x && n%i != x && n%i <= k){
      //       ans1 = i;
      //       break;
      //    }
      // }
      // if(ans != -1){
      //    cout<<"YES"<<endl;
      //    cout<<n/ans<<endl;
      //    int sum = 0;
      //    while(sum < n){
      //       cout<<ans<<" ";
      //       sum += ans;
      //    }
      //    cout<<endl;
      // }
      // else if(ans1 != -1){
      //    cout << "YES" << endl;
      //    cout << n / ans1 + 1 << endl;
      //    cout<<n%ans1<<" ";
      //    int sum = n%ans1;
      //    while (sum < n){
      //       cout << ans1 << " ";
      //       sum += ans1;
      //    }
      //    cout << endl;
      // }
      // else{
      //    cout<<"NO"<<endl;
      // }
   }
   return 0;
}