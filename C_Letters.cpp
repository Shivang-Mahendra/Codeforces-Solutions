#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n,le,sum = 0;
   cin>>n>>le;
   vector<long long> a(n),b(le);
   for(int i=0; i<n; i++){
      cin>>a[i];
      a[i]+=sum;
      sum = a[i];
   }
   for(int i=0; i<le ;i++){
      cin>>b[i];
   }
   for(int i=0; i<le; i++){
      if(b[i]<=a[0]){
         cout<<1<<" "<<b[i]<<endl;
      }
      else{
         long long l = 1, r = n-1;
         while(l<=r){
            long long mid = (r-l)/2 + l;

            if(a[mid] >= b[i] && a[mid-1] < b[i]){
               cout<< mid+1 <<" "<<b[i]-a[mid-1];
               cout<<endl;
               break;
            }

            else if(a[mid] > b[i]){
               r = mid-1;
            }

            else{
               l = mid+1;
            }
         }
      }
   }
   return 0;
}