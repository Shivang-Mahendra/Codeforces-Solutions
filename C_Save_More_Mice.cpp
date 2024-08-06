#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      vector<int> arr(k);
      for(int i=0; i<k; i++){
         cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      int cat = 0, count = 0;
      for(int i=k-1; i>=0; i--){
         if(cat < arr[i]){
            cat += (n - arr[i]);
            count++;
         }
         else{
            break;
         }
      }
      cout<<count<<endl;
   }
   return 0;
}