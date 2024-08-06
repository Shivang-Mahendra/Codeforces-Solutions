#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>> n;
   unordered_map<int ,int> m;
   for(int i=0; i<n; i++){
      int x;
      cin>>x;
      m[x]++;
   }
   // bool flag = false;
   int i;
   for(i=1; i<3001; i++){
      if(!m[i]){
         // flag = true;
         break;
      }
   }
   // if(!flag){
      // cout<<3001<<endl;
   // }
   cout << i << endl;
   return 0;
}