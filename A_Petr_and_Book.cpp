#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,sum = 0;
   cin>>n;
   vector<int> week(7);
   for(int i=0; i<7; i++){
      cin>>week[i];
      sum += week[i];
   }
   if(sum == 1 ){
      for(int i=0; i<7; i++){
         if(week[i] == 1){
            cout<< i+1 <<endl;
            return 0;
         }
      }
   }
   sum = n%sum;
   if(sum == 0){
      for(int i=6; i>=0; i--){
         if(week[i] != 0){
            cout<< i+1 <<endl;
            return 0;
         }
      }
   }
   for(int i=0; i<7; i++){
      sum -= week[i];
      if(sum <= 0){
         cout<< i+1 <<endl; 
         return 0;
      }
   }
   return 0;
}