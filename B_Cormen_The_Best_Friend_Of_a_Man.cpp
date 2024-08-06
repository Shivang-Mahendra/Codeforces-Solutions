#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,extra=0;
   cin>>n>>k;
   vector<int> walks(n);
   for(int i = 0; i < n; i++){
      cin>>walks[i];
   }
   for(int i = 0; i < n - 1; i++){
      if(k - walks[i] > walks[i+1]){
         extra += ((k - walks[i]) - walks[i + 1]); 
         walks[i+1] = k - walks[i];
      }
   }
   cout<<extra<<endl;
   for(int i = 0; i < n; i++){
      cout<<walks[i]<<" ";
   }
   return 0;
}