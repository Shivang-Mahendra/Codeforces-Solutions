#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, mi, c = 0;
      cin>>n;
      vector<int> a(n),b;
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      b = a;
      sort(b.begin(), b.end());
      mi = b[0];
      for(int i=0; i<n; i++){
         if(a[i] != b[i] && a[i]%mi != 0){
            c = 1;
            break;
         }
      }
      if(c)
         cout<<"NO"<<endl;
      else
         cout<<"YES"<<endl;
   }
   return 0;
}