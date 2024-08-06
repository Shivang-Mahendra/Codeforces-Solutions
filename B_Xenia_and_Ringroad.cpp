#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,task;
   long long time=0;
   cin>>n>>task;
   int arr[task];
   for(int i=0; i<task; i++){
      cin>>arr[i];
   }
   if(task==0){
      cout<<time;
      return 0;
   }
   time = arr[0]-1;
   for(int i=1; i<task; i++){
      if(arr[i]<arr[i-1]){
         time += (n-arr[i-1]);
         time += arr[i];
      }
      else{
         time += (arr[i]-arr[i-1]);
      }
   }
   cout<<time;
   return 0;
}