#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, sum = 0, o = 0, e = 0;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i]; 
         sum += a[i];
         if(a[i] % 2)
            o++;
         else
            e++;
      }
      if(sum % 2 || (o != 0 && e!= 0)){
         cout<<"YES"<<endl;
      }
      else  cout<<"NO"<<endl;
   }
   return 0;
}