#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   unordered_map<char, int> m;
   int n = s.size(), i = 0, odd = 0;
   while(i<n){
      m[s[i]]++;
      i++;
   }
   for(auto it : m){
      if(it.second&1)
         odd++;
   }
   if(odd&1 || odd == 0){
      cout<<"First"<<endl;
   }
   else{
      cout<<"Second"<<endl;
   }
   return 0;
}