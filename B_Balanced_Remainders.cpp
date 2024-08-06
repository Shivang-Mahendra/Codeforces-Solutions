#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,flag=0,count_0=0,count_1=0,count_2=0,moves=0;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      for(int i=0; i<n; i++){
         if(arr[i]%3 == 0){
            count_0++;
         }
         else if(arr[i]%3 == 1){
            count_1++;
         }
         else{
            count_2++;
         }
      }
      while(1){
         int maxi = max(count_0, max(count_1, count_2));
         // int mini = min(count_0, min(count_1, count_2));
         if(count_0==count_1 && count_2==count_1){
            break;
         }
         else if(count_0 == maxi){
            count_0--;
            count_1++;
         }
         else if(count_1==maxi){
            count_1--;
            count_2++;
         }
         else{
            count_2--;
            count_0++;
         }
         moves++;
      }
      cout<<moves<<endl;
   }
   return 0;
}