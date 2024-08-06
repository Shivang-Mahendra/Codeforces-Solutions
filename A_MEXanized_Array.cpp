#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k,x;
      long long sum = 0;
      cin>>n>>k>>x;
      if(n < k || (k-x) >= 2)
         cout<<-1<<endl;
      else{
         sum += (k*(k-1))/2;
         n -= k;
         if(x==k)
            x--;
         sum += (n*x);
         cout<<sum<<endl; 
      }
   }
   return 0;
}