#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 +5;
int main(){
   int t;
   cin>>t;
   vector<int> xorVal(N,0);
   for(int i=1; i<N; i++){
      xorVal[i] = xorVal[i-1]^i;
   }
   while(t--){
      int mex,xor1;
      cin>>mex>>xor1;
      int temp = xorVal[mex-1];
      if(xor1 == temp){
         cout<<mex<<endl;
      }
      else if ((xor1 ^ temp) == mex)
      {
         cout<<mex+2<<endl;
      }
      else{
         cout<<mex+1<<endl;
      }
   }
   return 0;
}