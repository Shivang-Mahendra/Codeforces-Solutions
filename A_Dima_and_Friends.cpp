#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, sum = 0, x, i = 1, count = 0 ;
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>x;
      sum+=x;
   }
   n++;
   while(i<=5){   
      if((sum+i)%n != 1){
         count++;
      }
      i++;
   }
   cout << count;
   // if(sum%n == 1){
   //    cout << 1 << endl;
   // }
   // else{
   //    cout << n << endl;
   // }
   return 0;
}