#include<bits/stdc++.h>
using namespace std;
// CORRECT basic Approach 
// bool func(int n, int m){
//    if(n == m)
//       return true;
//    if(n%3 != 0)
//       return false;
//    return (func(n/3, m) || func(2*n/3, m));
// }
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, m;
      cin >> n >> m;
      if(m > n){
         cout<<"NO"<<endl;
      }
      else if(m == n){
         cout<<"YES"<<endl;
      }
      else{
         int temp = gcd(n,m);
         n = n/temp;
         m = m/temp; 
         int x=0,y=0;
         while(n%3 == 0){ n/=3; y++; }
         while(m%2 == 0){ m/=2; x++; }
         if(n==1 && m==1 && x<=y)
            cout << "YES" << endl;
         else{
            cout << "NO" << endl;
         }


         //CORRECT basic approach
         // if(func(n,m))
         //    cout << "YES" << endl;
         // else 
         //    cout << "NO" << endl;
      }
   }
   return 0;
}