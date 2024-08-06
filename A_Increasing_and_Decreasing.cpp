#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int x,y,n,i=1, f = 0;
      cin>>x>>y>>n;
      vector<int> a;
      a.push_back(y);
      while(a.size() < n-1){
         a.push_back(a.back()-i);
         i++;
         if(a.back() <= x){
            f = 1;
            break;
         }
      }
      if(f){
         cout<<-1<<endl;
      }
      else if(a.back() - i >= x){
         a.push_back(x);
         for(int i=n-1; i>=0; i--){
            cout<<a[i]<<" ";
         }
         cout<<endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
   return 0;
}