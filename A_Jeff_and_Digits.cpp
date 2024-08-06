#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,cnt5=0,cnt0=0;;
   cin>>n;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }
   for(int i=0 ;i<n; i++){
      if (arr[i] == 5)
      {
         cnt5++;
      }
      else{
         cnt0++;
      }
   }
   if(cnt0==0){
      cout<<-1<<endl;
   }
   else if(cnt5<9){
      if(cnt0!=0){
         cout<<0<<endl;
      }
   }
   else{
      int times = cnt5 - cnt5%9;
      string ans = ""; 
      while(times--){
         ans+='5';
      }
      times = n - cnt5;
      while(times--){
         ans+='0';
      }
      cout<<ans<<endl;
   }
   return 0;
}