#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      if(n==1)
         cout<<1<<endl;
      else if(n==2)
         cout<<-1<<endl;
      else{
         int arr[n][n];
         for(int i=0; i<n; i++){
            arr[i][i] = i+1;
         }
         int c=n+1;
         for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
               arr[i][j]=c++;
               arr[j][i]=c++;
            }
         }
         for (int i = 0; i < n; i++)
         {
            for (int j = 0; j < n; j++)
            {
               cout<<arr[i][j]<<" ";
            }
            cout<<endl;
         }
      }
   }
   return 0;
}