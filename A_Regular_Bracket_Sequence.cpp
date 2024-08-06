#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string str;
      cin>>str;
      if(str.length() & 1 == 1 || str[0]==')' || str[str.length()-1]=='('){
         cout<<"NO"<<endl;
      }
      else{
         cout<<"YES"<<endl;
      //    int count_ques=0, count_brac=0;
      //    for(int i=0; i<str.length(); i++){
      //       if(str[i]=='('){
      //          count_brac++;
      //       }
      //       else if(str[i]==')'){
      //          if(count_brac==0){
      //             cout<<"NO"<<endl;
      //          }
      //          count_brac--;
      //       }
      //       else{
      //          count_ques++;
      //       }
      //    }
      //    if((count_brac==0 && count_ques%2==0) || (count_brac == count_ques)){
      //       cout<<"YES"<<endl;
      //    }
      //    else{
      //       cout<<"NO"<<endl;
      //    }
      }
   }
   return 0;
}