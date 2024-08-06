#include<bits/stdc++.h>
using namespace std;
string zero(string str){
   int n = str.length();
   for(int i=0; i<n; i++){
      if(str[i] == '0'){
         str.erase(i,1);
         n--;
         i--;
      }
   }
   return str;
}
int main(){
   int a,b,c;
   string str1,str2,str3;
   cin >> a >> b;
   c = a + b;
   str1 = zero(to_string(a));
   str2 = zero(to_string(b));
   str3 = zero(to_string(c));
   a = stoi(str1);
   b = stoi(str2);
   c = stoi(str3);
   // cout<<a<<" "<<b<<" "<<c<<endl;
   if(a+b == c){
      cout << "YES" << endl;
   }
   else{
      cout << "NO" << endl;
   }
   return 0;
}