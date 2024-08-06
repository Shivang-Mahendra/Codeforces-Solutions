#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      string s = "";
      // if(n<=26){
      //    s += "aa";
      //    s += ('a' + n-3);
      // }
      // else if(n<=52){
      //    s += 'a';
      //    s += ('a' + (n-1)%26 - 1);
      //    s += 'z';
      // }
      // else{
      //    s += ('a' + n%26 - 1);
      //    s += "zz"; 
      // }
      
      
      // int x, y, z;
      // x = y = z = n/3;
      // z += (n%3);
      // int lx = x - 1, ry = 26 - y, rz = 26 - z;
      // if(rz > 0 && lx > 0){
      //    if(rz >= lx){
      //       z += lx;
      //       rz -= lx;
      //       lx = 0;
      //    }
      //    else {
      //       z += rz;
      //       lx -= rz;
      //       rz = 0;
      //    }
      // }
      // if(rz > 0){
      //    int ly = y - 1;
      //    if(rz >= ly){
      //       z += ly;
      //       rz -= ly;
      //       ly = 0;
      //    }
      //    else{
      //       z += rz;
      //       ly -= rz;
      //       rz = 0;
      //    }
      //    y = 1 + ly;
      // }
      // else if(ry > 0 && lx > 0){
      //    if (ry >= lx){
      //       y += lx;
      //       lx = 0;
      //    }
      //    else{
      //       y += ry;
      //       lx -= ry;
      //    }
      // }
      // x = 1 + lx;
      // s += 'a' - 1 + x;
      // s += 'a' - 1 + y;
      // s += 'a' - 1 + z;


      int i,j,k, flag = 0;
      for(i=1; i<=26; i++){
         for(j=1; j<=26; j++){
            for(k=1; k<=26; k++){
               if(i+j+k == n){
                  flag = 1;
                  break;
               }
               if(i + j + k > n)
                  break;
            }
            if(flag)
               break;
         }
         if (flag)
            break;
      }
      s += 'a' - 1 + i;
      s += 'a' - 1 + j;
      s += 'a' - 1 + k;
      cout<<s<<endl;
   }
   return 0;
}