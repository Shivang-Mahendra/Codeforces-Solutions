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
      int flag = 0;
      string s;
      cin>>s;
      int n = s.size();
      for(int i=0; i<n-1; i++){
         if(s[i] != s[i+1]){
            flag = 1;
            swap(s[i], s[i+1]);
            cout<<"YES"<<endl;
            cout<<s<<endl;
            break;
         }
      }
      if(flag == 0)
         cout<<"NO"<<endl;
   }
   return 0;
}