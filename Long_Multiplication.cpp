#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int t;
   cin>>t;
   while(t--){
      string x, y;
      cin>>x>>y;
      string x1 = "", y1 = "";
      int n = x.length(), m = y.length(), i = 0;
      while(i < min(n, m) && x[i] == y[i]){
         i++;
      }
      i++;
      if(i<n){
         if(x[i] > y[i]){
            while(i<min(n,m)){
               if(x[i] > y[i]){
                  char ch = x[i];
                  x[i] = y[i];
                  y[i] = ch;
               }
               i++;
            }
         }
         else{
            while(i<min(n,m)){
               if(x[i] < y[i]){
                  char ch = x[i];
                  x[i] = y[i];
                  y[i] = ch;
               }
               i++;
            }
         }
      }
      // for(int i=0; i<min(n,m); i++){
      //    if(xs == ys || x[i] == y[i]){
      //       xs += (x[i] - '0');
      //       ys += (y[i] - '0');
      //    }
      //    else{
      //       if(x[i] > y[i]){
      //          if(xs > ys){
      //             char ch = x[i];
      //             x[i] = y[i];
      //             y[i] = ch;
      //          }
      //          xs += (x[i] - '0');
      //          ys += (y[i] - '0');
      //       }
      //       else{
      //          if(xs < ys){
      //             char ch = x[i];
      //             x[i] = y[i];
      //             y[i] = ch;
      //          }
      //          xs += (x[i] - '0');
      //          ys += (y[i] - '0');
      //       }
      //    }
      // }
      cout<<x<<endl;
      cout<<y<<endl;
   }
   return 0;
}