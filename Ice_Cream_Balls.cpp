#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n;
      cin>>n;
      long long i=sqrt(2*n);
      long long j = i + 1, t = (i*j)/2;
      if(t > n){
         j -= 1;
         i -= 1;
         t = (i*j)/2;
      }
      // cout<< i << endl;
      if( t == n){
         cout<<j<<endl;
      }
      else{
         cout<<j + (n - t)<<endl;
      }
      // while(i < n){
      //    i += j;
      //    j++;
      //    // cout<<j<<" "<<i <<endl;
      // }
      // if( i == n)
      //    cout<<j<<endl;
      // else{
      //    j--;
      //    i -= j;
      //    cout<< j + n-i<<endl;
      // }
   }
   return 0;
}