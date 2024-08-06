#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,c;
      cin>>n>>c;
      vector<long long> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      long long l = 1, r = 1e9;
      while(l<=r){
         long long mid = l + (r-l)/2;
         long long temp = 0;
         for(int i=0; i<n; i++){
            temp += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(temp > c)
               break; 
         }
         // cout<<temp<<endl;
         if(temp == c){
            cout<<mid<<endl;
            break;
         }
         if(temp > c){
            r = mid - 1;
         }
         else{
            l = mid + 1;
         }
      }
   }
   return 0;
}