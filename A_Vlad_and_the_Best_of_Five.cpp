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
      string s;
      cin>>s;
      int a = 0;
      for(int i=0; i<5; i++){
         if(s[i] == 'A')
            a++;
      }
      if(a>=3){
         cout<<"A"<<endl;
      }
      else{
         cout<<"B"<<endl;
      }
   }
   return 0;
}