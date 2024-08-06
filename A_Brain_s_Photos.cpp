#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int r, c;
   char ch;
   cin>>r>>c;
   for(int i=0; i<r; i++){
      for(int j=0; j<c; j++){
         cin>>ch;
         if(ch != 'W' && ch != 'B' && ch != 'G'){
            cout<<"#Color";
            return 0;
         }
      }
   }
   cout<<"#Black&White";
   return 0;
}