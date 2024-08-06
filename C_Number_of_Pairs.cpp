#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, l, r;
      long long a = 0, b = 0;
      cin>>n>>l>>r;
      vector<int> v(n);
      for(int i=0; i<n; i++)
         cin>>v[i];
      sort(v.begin(), v.end());
      for(int i=0; i<n; i++){
         int low = i+1, high = n-1, temp = i;
         while (low <= high){
            int mid = (low+high)/2;
            if(v[mid] <= r - v[i]){
               temp = mid;
               low = mid + 1;
            }
            else{
               high = mid - 1;
            }
         }
         a += (temp - i);
         low = i + 1; high = n - 1; temp = i;
         while (low <= high){
            int mid = (low + high) / 2;
            if (v[mid] < l - v[i]){
               temp = mid;
               low = mid + 1;
            }
            else{
               high = mid - 1;
            }
         }
         b += temp - i;
      }
      cout<<a-b<<endl;
   }
   return 0;
}