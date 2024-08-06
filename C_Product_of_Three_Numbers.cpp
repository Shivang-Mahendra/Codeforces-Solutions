#include<bits/stdc++.h>
using namespace std;
int isPrime(int n, vector<int> &count){
   int li = sqrt(n);
   for(int i=2; i<=li; i++){
      if(n%i == 0 && count[i] == 0){
         count[i] = 1;
         if(n/i <= li && count[n/i] != 0){
            count[i] = 0;
            continue;
         }
         else if(n/i <= li)
            count[n/i]++;
         return i;
      }
   }
   return 0;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, a, b, c;
      cin>>n;
      vector<int> count(sqrt(n) + 1, 0);
      a = isPrime(n, count); 
      if (!a){
         cout<<"NO"<<endl;
         continue;
      }
      b = n/a;
      c = isPrime(b, count);
      if (!c){
         cout << "NO" << endl;
         continue;
      }
      b = b/c;
      cout<<"YES"<<endl;
      cout<<a<<" "<<b<<" "<<c<<endl;
   }
   return 0;
}