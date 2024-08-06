#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long m, k, a1, ak, fancy = INT_MAX;
      cin >> m >> k >> a1 >> ak;
      long long tak = m/k, ta1 = m%k, i = 0;
      long long l_a1 = (a1 - ta1) > 0 ? a1 - ta1 : 0;
      long long f_a1 = (ta1 - a1) > 0 ? ta1 - a1 : 0;
      long long l_ak = (ak - tak) > 0 ? ak - tak : 0;
      long long f_ak = (tak - ak) > 0 ? tak - ak : 0;
      f_ak -= l_a1/k;
      cout << (((f_ak + f_a1) > 0) ? (f_ak + f_a1) : 0) << endl;
      // while(i < ak && tak + ak*k <= m){
      //    tak += (ak*k);
      //    i++;
      // }
      // long long temp = m - tak; 
      // i = 0;
      // long long req = m - (min(tak,ak) * k);
      // if(req <= a1){
      //    cout << 0 << endl;
      // }
      // else if((req - a1) % k == 0){
      //    cout << (req - a1) / k << endl;
      // }
      // else{
      //    // long long rak = req/k + (req%k);
      //    // cout<<min(rak, req - a1)<<endl;
      //    fancy = min(fancy, req/k + req%k);
      //    while(i < a1 && ta1 + 1 <= req){
      //       ta1 += 1;
      //       fancy = min(fancy, (req - ta1) / k + (req - ta1) % k);
      //       i++;
      //    }
      //    // req -= ta1;
      //    // fancy = min(fancy, req/k + req%k);
      //    cout<<fancy <<endl;
      // }
   }
   return 0;
}