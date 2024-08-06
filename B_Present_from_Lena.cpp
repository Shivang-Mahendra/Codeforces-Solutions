#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,print=0;
   cin>>n;
   int spaces = n;
   for(int i=0; i<n+1; i++){
      for(int j=0; j<2*spaces; j++){
         cout<<" ";
      }
      spaces--;
      for(int j=0; j<=2*i; j++){
         if(2*i == j){
            cout<<print;
         }
         else{
            cout<<print<<" ";
         }
         if(j<i){
            print++;
         }
         else{
            print--;
         }
      }
      cout<<endl;
      print = 0;
   }
   spaces = 1;
   for (int i = n-1; i >=0; i--)
   {
      for (int j = 0; j <2*spaces; j++)
      {
         cout << " ";
      }
      spaces++;
      for (int j = 0; j <= 2 * i; j++)
      {
         if (2 * i == j)
         {
            cout << print;
         }
         else{
            cout <<print<<" ";
         }
         if (j < i)
         {
            print++;
         }
         else
         {
            print--;
         }
      }
      cout << endl;
      print = 0;
   }
   return 0;
}