#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   unordered_map<ll, int> m;
   for(int i=2; i<1e6+1; i++){
      bool flag = true;
      for(int j=2; j<=sqrt(i); j++){
         if(i%j == 0){
            flag = false;
            break;
         }
      }
      if(flag)
         m[(ll)i*i]++;
   }
   int n;
   cin>>n;
   // unordered_map<ll, bool> ma;
   for(int i = 0; i<n; i++){
      ll x;
      cin>>x;
      if(m[x]){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
      // if (ma[x]){
      //    cout << ((ma[x] == true) ? "YES" : "NO") << endl;
      // }
      // if(x&1 == 0 && x>4){
      //    cout<<"NO"<<endl;
      //    ma[x] = false;
      //    continue;
      // }
      // unordered_map<ll, int> m;
      // m[x]++;
      // m[1]++;
      // for(int i=2; i<=x/2; i++){
      //    if(x%i == 0)
      //       m[i]++;
      //    if(m.size() > 3)
      //       break;
      // }
      // if(m.size() == 3){
      //    cout<<"YES"<<endl;
      //    ma[x] = true;
      // }
      // else{
      //    cout<<"NO"<<endl;
      //    ma[x] = false;
      // }
   }
   return 0;
}