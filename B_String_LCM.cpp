#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string a,b;
      cin>>a>>b;
      // int len1=a.length(),len2=b.length(),maxlen=max(len1,len2),minlen=min(len1,len2);
      // if((maxlen%minlen) != 0){
      //    int flag=0;
      //    char ch=a[0];
      //    for(int i=0; i<len1; i++){
      //       if(ch!=a[i]){
      //          flag=1;
      //          break;
      //       }
      //    }
      //    if(!flag)
      //       for(int i=0; i<len2; i++){
      //          if(ch!=b[i]){
      //             flag=1;
      //             break;
      //          }
      //       }
      //    if(flag==0){
      //       int anslen;
      //       for(int i=2; i<=maxlen; i++){
      //          if((i*minlen)%maxlen == 0){
      //             anslen = (i*minlen);
      //             break;
      //          }
      //       }
      //       string ans = "";
      //       while(ans.length() < anslen){
      //          ans+=a;
      //       }
      //       cout<<ans<<endl;
      //    }
      //    else{
      //       cout<<-1<<endl;
      //    }
      // }
      // else{
      //    if(maxlen==len1){

      //       string temp = "";
      //       while(temp.length()<a.length()){
      //          temp+=b;
      //       }
      //       if(temp==a){
      //          cout<<a<<endl;
      //       }
      //       else{
      //          cout<<-1<<endl;
      //       }
      //    }
      //    else {
      //       string temp = "";

      //       while (temp.length() < b.length())
      //       {
      //          temp += a;
      //       }
      //       if (temp == b)
      //       {
      //          cout << b << endl;
      //       }
      //       else
      //       {
      //          cout << -1 << endl;
      //       }
      //    }
      // }
      int anslen,len1 = a.length(), len2 = b.length(), maxlen = max(len1, len2), minlen = min(len1, len2);
      for(int i=1; i<=maxlen; i++){
         if((i*minlen)%maxlen == 0){
            anslen = i*minlen;
            break;
         }
      }
      string temp_a="",temp_b="";
      while(temp_a.length() < anslen){
         temp_a += a;
      }
      while(temp_b.length() < anslen){
         temp_b+=b;
      }
      if(temp_a == temp_b){
         cout<<temp_a<<endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
   return 0;
}