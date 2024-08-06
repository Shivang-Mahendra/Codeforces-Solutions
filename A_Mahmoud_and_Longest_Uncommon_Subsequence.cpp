#include<bits/stdc++.h>
using namespace std;
int main(){
   string a,b;
   cin>>a>>b;
   if(a==b){
      cout<<-1<<endl;
   }
   else if(a.length()!=b.length()){
      cout<<max(a.length(),b.length());
   }
   else{
      int count_a=0;
      for(int i=0; i<a.length(); i++){
         string s = a.substr(0,a.length()-i);
         // cout<<s<<endl;
         if(b.find(s,0) == string::npos){
            count_a = a.length() - i;
            break;
         }
      }
      // CORRECT BOTH WAYS WITH AND WITHOUT COMMENT PART

      // if(count_a>=b.length()){
      //    for (int i = 0; i < b.length() && count_a<b.length()-i; i++)
      //    {
      //       string s = a.substr(0, b.length() - i);
      //       if (!a.find(s, 0))
      //       {
      //          if (count_a < b.length() - i)
      //          {
      //             count_a = b.length() - i;
      //          }
      //       }
      //    }
      // }
      cout<<count_a;
   }
   return 0;
}