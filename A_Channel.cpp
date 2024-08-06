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
      int n, a, q, f = 0;
      cin>>n>>a>>q;
      int s = a;
      if(n == a)
         f = 1;
      char ch;
      for(int i=0; i<q; i++){
         cin>>ch;
         if(ch == '+'){
            a++;
            s++;
         }
         else{
            a--;
         }
         if(a == n)
            f = 1;
      }
      if(f)
         cout<<"YES"<<endl;
      else if(s >= n)
         cout<<"MAYBE"<<endl;
      else
         cout<<"NO"<<endl;
   }
   return 0;
}