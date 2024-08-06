#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long a,b;
      cin>>a>>b;
      long long maxi = max(a,b), mini = min(a,b); 
      if(a==b){
         cout<<0<<endl;
      }
      else if(maxi%2 != 0 || maxi%mini != 0){
         cout<<-1<<endl;
      }
      else{
         int times = -1;
         maxi/=mini;
         while(maxi % 8 == 0){
            maxi/=8;
            times++;
         }
         while(maxi%4 == 0){
            maxi /= 4;
            times++;
         }
         while (maxi % 2 == 0)
         {
            maxi /= 2;
            times++;
         }
         if(times != -1 && maxi == 1)
            cout<<times+1<<endl;
         else
            cout<<-1<<endl;
      }
   }
   return 0;
}