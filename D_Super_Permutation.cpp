#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,flag=0,sum=1;
      cin>>n;
      vector<int> arr(n);
      arr[0] = n;
      for(int i=1; i<n; i++){
         sum += i+1;
         arr[i] = sum%n;
      }
      sort(arr.begin(),arr.end());
      for(int i=1; i<n; i++){
         if(arr[i]-arr[i-1] != 1){
            cout<<-1;
            flag=1;
            break;
         }
      }
      if(!flag){
         for(int i=1; i<=n; i++)
         cout<<i<<" ";
      }
      cout<<endl;
   }
   return 0;
}