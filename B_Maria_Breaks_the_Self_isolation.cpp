#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,gran=1,flag=0;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      sort(arr.begin(), arr.end());
      for(int i=n; i>0; i--){
         if(i+1 > arr[i-1]){
            cout<<i+1<<endl;;
            flag = 1;
            break;
         }
      }
      if(!flag){
         cout<<1<<endl;
      }
   }
   return 0;
}