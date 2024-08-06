#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,cnt_0=0,not_0=0,one=0,greater=0;  
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
         cin>>arr[i];
         if(arr[i]==0)
            cnt_0++;
         else if(arr[i]==1){
            not_0++;
            one=1;
         }
         else{
            greater=1;
            not_0++;
         }
      }
      if(cnt_0 > not_0+1){
         if(one == 0)
            cout<<"1"<<endl;
         else{
            if(greater == 1)
               cout<<1<<endl;
            else
               cout<<2<<endl;
         }
      }
      else
         cout << 0 << endl;
   }
}