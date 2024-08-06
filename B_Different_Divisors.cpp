#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int d;
      cin>>d;
      int temp = 1 + d;
      for (int i = 2; i*i <= temp; i++)
      {
         if (temp % i == 0)
         {
            temp++;
            i = 1;
         }
      }
      int temp1 = temp + d;
      for(int i = 2; i*i <= temp1; i++){
         if(temp1 % i == 0){
            temp1++;
            i = 1;
         }
      }
      cout<<temp1*temp<<endl;
   }
   return 0;
}