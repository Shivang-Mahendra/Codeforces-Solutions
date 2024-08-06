#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<long long> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      // long long f_b = *max_element(arr.begin(), arr.end());
      int i=1;
      while(i<n && arr[i]>=arr[i-1]){
         i++;
      }
      while (i < n && arr[i] <= arr[i - 1])
      {
         i++;
      }
      if(i==n){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
   return 0;
}