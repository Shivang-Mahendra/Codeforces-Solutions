#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,k;
      cin>>n>>k;
      long long temp = k;
      if(k==1){
         cout<<1<<endl;
      }
      else if(n==k){
         cout<<1<<endl;
      }
      else if(n<=k){
         if (k % n == 0){
            cout << (k / n) << endl;
         }
         else{
            cout << (k / n) + 1<< endl;
         }
      }
      else{
         long long c = n/k;
         if(n%k) 
            c++;
         k *= c;
         if (k % n == 0)
         {
            cout << (k / n) << endl;
         }
         else
         {
            cout << (k / n) + 1 << endl;
         }
      }
   }
   return 0;
}