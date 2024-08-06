#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      int max=0;
      for(int i=0; i<n; i++){
         int temp = 0;
         while(i<n && arr[i]==0){
            temp++;
            i++;
         }
         if(temp>max){
            max = temp;
         }
      }
      cout<<max<<endl;
   }
   return 0;
}