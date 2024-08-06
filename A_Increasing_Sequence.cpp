#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, temp = 0;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++)
         cin>>a[i];
      for(int i=0; i<n; i++){
         temp++;
         if (a[i] == temp)
            temp++;
      }
      cout<<temp<<endl;
   }
   return 0;
}