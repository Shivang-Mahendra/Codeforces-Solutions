#include<bits/stdc++.h>
using namespace std;
int main(){
   string s, t = "";
   int k1, k2;
   cin>>s>>k1>>k2;
   for(int i=0; i<s.size(); i++){
      t += 'a' + ((s[i]-'a')*k1+k2)%26; 
   }
   cout<<t<<endl;
   return 0;
}