#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<long long> arr(n);
      for(int i=0; i<n; i++){
         cin >> arr[i];
      }
      sort(arr.begin(), arr.end());
      if(n == 1){
         cout << arr[0] << endl;
         continue;
      }
      long long diff = arr[0];
      for(int i=1; i<n; i++){
         arr[i] -= diff;
         diff += arr[i];
      }
      cout << *max_element(arr.begin(), arr.end()) << endl;;
   }
   return 0;
}