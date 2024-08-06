#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,count=0,max=0;
   cin>>n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }
   sort(arr.begin(),arr.end());
   for(int i=0; i<n;){
      int temp = i, temp1 = arr[i];
      while(i<=n && temp1 == arr[i]){
         i++;
      }
      count++;
      if(i-temp > max){
         max = i-temp;
      }
   }
   // cout << (max == 0)? 1 : 50; 
   cout << max << " " << count << endl;
   return 0;
}