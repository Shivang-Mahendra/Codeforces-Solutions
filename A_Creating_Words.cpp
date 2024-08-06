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
      string s1, s2;
      cin>>s1>>s2;
      swap(s1[0], s2[0]);
      cout<<s1<<" "<<s2<<endl;
   }
   return 0;
}