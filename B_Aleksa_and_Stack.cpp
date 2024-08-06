#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int prev = 2, prev1 = 3;
      cout<<prev<<" "<<prev1<<" ";
      for(int i=2; i<n; i++){
         int t = prev1 + 1;
         while(3*t % (prev+prev1) == 0)
            t++;
         cout<<t<<" ";
         prev = prev1;
         prev1 = t;
      }
      cout<<endl;
   }
   return 0;
}