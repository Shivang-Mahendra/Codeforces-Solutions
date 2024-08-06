#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n , m ,sx, sy, d;
      cin>>n>>m>>sx>>sy>>d;
      int top = sx - d;
      int bottom = sx + d;
      int left = sy - d;
      int right = sy + d;
      if(top<=1){
         if(left <= 1 || bottom >= n){
            cout<<-1<<endl;
            continue;
         }
      }
      if (right >= m)
      {
         if (left <= 1 || bottom >= n)
         {
            cout << -1 << endl;
            continue;
         }
      }
      cout<<n+m-2<<endl;
   }
   return 0;
}