#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int n = s.length();
      string t = "", t1 = "", t2 = "";
      for(int i=0; i<n; i++){
         t += "()";
      }
      for(int i=0; i<n; i++){
         if(t1.length() + 4 <= 2*n){
            t1 += "(())";
            t2 += "(())";
         }
         else
            break;
      }
      while(t1.length() < 2 * n){
         t1 += "()";
         t2 = "()" + t2;
      }
      if(t.find(s) == string::npos){
         cout << "YES\n"<< t;
      }
      else if(t1.find(s) == string::npos){
         cout<<"YES\n"<<t1;
      }
      else if(t2.find(s) == string::npos)
         cout<<"YES\n"<<t2;
      else{
         cout<<"NO";
      }
      cout<<endl;
   }
   return 0;
}