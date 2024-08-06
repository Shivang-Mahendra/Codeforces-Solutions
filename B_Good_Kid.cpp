#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      long long pro = 1;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++) cin>>v[i];   
      int min = *min_element(v.begin(), v.end()), f = 1;
      for(int i=0; i<n; i++){
         if(f && v[i] == min){
            pro *= (v[i] + 1);
            f = 0;
         }
         else  
            pro  *= v[i];
      }
      cout<<pro<<endl;
   }
   return 0;
}