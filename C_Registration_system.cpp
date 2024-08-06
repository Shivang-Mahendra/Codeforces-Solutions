#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   unordered_map<string, int> m;
   for(int i=0; i<n; i++){
      string s;
      cin>>s;
      if(m[s]){
         cout<<s+to_string(m[s])<<endl;
         m[s+to_string(m[s])]++;
         m[s]++;
      }
      else{
         m[s]++;
         cout<<"OK"<<endl;
      }
   }
   return 0;
}