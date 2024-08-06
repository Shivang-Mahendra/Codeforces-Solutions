#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,s;
      cin>>n;
      // if(n==1){
      //    cout<<-1<<endl;
      // }
      // else{
      //    vector<long long> arr;
      //    int c=1,flag=0;
      //    long long ans=3;
      //    arr.push_back(3);
      //    while(c!=n){
      //       for(int i=2; i<=9 && c!=n; i++){
      //          long long temp = ans*10+i;
      //          flag=0;
      //          for(int j=0; j<arr.size(); j++){
      //             if(temp%arr[j] == 0){
      //                flag=1;
      //                break;
      //             }
      //          }
      //          if(!flag){
      //             ans=temp;
      //             c++;
      //          }
      //       }
      //    }
      //    cout<<ans<<endl;
      // }
      if(n==1){
         cout<<-1<<endl;
      }
      else{
         n--;
         cout<<5;
         while(n--){
            cout<<7;
         }
         cout<<endl;
      }
   }
   return 0;
}