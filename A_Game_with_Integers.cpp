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
      if((n+1)%3 == 0 || (n-1)%3 == 0)
         cout<<"First"<<endl;
      else{
         cout<<"Second"<<endl;
      }
   }
   return 0;
}