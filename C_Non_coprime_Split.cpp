#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
   if (n <= 1)
      return false;
   int l = sqrt(n);
   for (int i = 2; i <= l; i++)
      if (n % i == 0)
         return false;
   return true;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int l,r;
      cin>>l>>r;
      if(r<=3){
         cout<<-1<<endl;
      }
      else if(l == r && r&1){
         if(isPrime(l)){
            cout<<-1<<endl;
         }
         else{
            for(int i = 3; i<l/2; i++){
               if(__gcd(r-i,i)!=1){
                  cout<<i<<" "<<r-i<<endl;
                  break;
               }
            }
         }
      }
      else{
         if(r&1){
            cout<<(r-1)/2<<" "<<(r-1)/2<<endl;
         }
         else{
            cout<<r/2<<" "<<r/2<<endl;
         }
      }
   }
   return 0;
}