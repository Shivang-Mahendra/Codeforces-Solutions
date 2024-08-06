#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int x;
      cin>>x;
      map<int, int> m; 
      vector<int> a;
      a.push_back(x);
      if (x & 1){
         a.push_back(--x);
         m[1]++;
      }
      while(x != 1){
         if(x != 2){
            int t = x;
            for(int i = 2; i<= x/2; i++){
               if(m[i] < 2 && x % i == 0){
                  m[i]++;
                  a.push_back(x - i);
                  x -= i;
                  break;
               }
            }
            if(t == x && m[1] == 0 ){
               a.push_back(--x);
               m[1]++;
            }
         }
         else{
            m[x/2]++;
            a.push_back(x/2);
            x /= 2;
         }
      }
      int n = a.size();
      cout<<n<<endl;
      for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}