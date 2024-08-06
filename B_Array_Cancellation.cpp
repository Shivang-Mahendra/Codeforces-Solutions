#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while( t-- ){
      int n;
      cin >> n;
      vector<long long> arr(n);
      vector<long long> posi;
      for(int i=0; i<n; i++){
         cin >> arr[i];
         // if(arr[i]>=0){
         //    posi.push_back(i);
         // }
      }
      long long sum = 0, coins = 0;
      for(int i=0; i<n; i++){
         if(arr[i]>=0){
            sum += arr[i];
            arr[i] = 0;
         }
         else{
            if(sum + arr[i] >= 0){
               sum += arr[i];
               arr[i] = 0;
            }
            else{
               arr[i] += sum;
               sum = 0;
            }
         }
      }
      for(int i=0; i<n; i++){
         coins += arr[i];
      }
      cout<<abs(coins)<<endl;

      //   RUNTIME ERROR

      // for(int i=0; i<n; i++){
      //    if(arr[i] >= 0){
      //       sum += arr[i];
      //    }
      //    else{
      //       if(sum + arr[i] >= 0){
      //          sum += arr[i];
      //       }
      //       else{
      //          arr[i] += sum;
      //          sum = 0;
      //          coins+=abs(arr[i]);
      //          while(arr[i] != 0){
      //             if(arr[posi[posi.size()-1]] + arr[i] > 0){
      //                arr[posi[posi.size()-1]] += arr[i];
      //                arr[i] = 0;
      //             }
      //             else if (arr[posi[posi.size() - 1]] + arr[i] == 0)
      //             {
      //                arr[posi[posi.size() - 1]] = 0;
      //                posi.erase(posi.end() - 1);
      //                arr[i] = 0;
      //             }
      //             else{
      //                arr[posi[posi.size() - 1]] = 0;
      //                arr[i] += posi[posi.size()-1];
      //                posi.erase(posi.end()-1);
      //             }
      //          }
      //       }
      //    }
      // }
      // cout<<coins<<endl;
   }
   return 0;
}