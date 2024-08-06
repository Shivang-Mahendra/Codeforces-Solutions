#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   bool f = 0;
   vector<int> a(n), b(n);
   for(int i=0; i<n; i++){
      cin>>a[i];
      b[i] = a[i];
      if(i && a[i] < a[i-1]){
         f = 1;
      }
   }
   if(f==0){
      cout<<"yes"<<endl;
      cout<<1<<" "<<1<<endl;
   }
   else{
      sort(b.begin(), b.end());
      int l = -1, r = -1;
      for(int i=0; i<n; i++){
         if(a[i] != b[i]){
            l = i;
            break;
         }
      }
      for(int i=n-1; i>=0; i--){
         if(a[i] != b[i]){
            r = i;
            break;
         }
      }
      int i = l;
      f=0;
      while(i < r){
         if(a[i] < a[i+1]){
            f = 1;
            break; 
         }
         i++;
      }
      if(f){
         cout<<"no"<<endl;
      }
      else{
         cout<<"yes"<<endl;
         cout<<l+1<<" "<<r+1<<endl;
      }
   }
   return 0;
}