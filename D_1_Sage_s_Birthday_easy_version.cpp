#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }
   sort(arr,arr+n);
   if(n%2 != 0){
      cout << n/2 << endl;
      for(int i=0; i<n-2; i+=2){
         swap(arr[i],arr[i+1]);
      }  
   }
   else{
      cout << (n/2)-1 << endl;
      for(int i=0; i<n-3; i+=2){
         swap(arr[i],arr[i+1]);
      }
   }
   for(int i=0; i<n; i++){
      cout << arr[i] <<" ";
   }
   return 0;
}