#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n,flag=0;
      cin>>n;
      vector<int> arr(n);
      arr[0] = 1;
      for(int i=1; i<n; i++){
         arr[i] = arr[i-1]+i+1;
      }
      for(int l=0; l<n-1; l++){
         for(int r=l+1; r<n; r++){
            int d = r-l+1;
            if(arr[d-1]%d != 0){
               flag = 1;
               while(l<=r){
                  cout<<++l<<" ";
               }
               break;
            }
         }
         if (flag){
            cout<<endl;
            break;
         }
      }
      if(!flag){
         cout<<-1<<endl;
      }
   }
   return 0;
}