#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long long ans=(n*(n+1))/2,i=1;
   n--;
   while(n--){
      ans+=(i*n);
      i++;
   }
   cout<<ans;
   return 0;
}