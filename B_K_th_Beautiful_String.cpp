#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k, i, temp = 0;
      cin>>n>>k;
      for(i=n-2; i>=0; i--){
         if(temp + (n-1-i) < k)
            temp += (n-1-i);
         else  break;
      }
      int j = n - (k - temp);
      // if (j==n) j--;
      // j = i+j;
      // cout<<i<<" "<<j<<endl;
      for(int l=0; l<n; l++){
         if(l != i && l != j)
            cout<<'a';
         else
            cout<<'b';
      }
      cout<<endl;
   }
   return 0;
}