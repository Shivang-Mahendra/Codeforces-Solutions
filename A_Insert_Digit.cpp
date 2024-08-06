#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,flag=0;
      char d;
      cin>>n>>d;
      string str;
      cin>>str;
      if(d!='0' && d!='9'){
         for(int i=0; i<n; i++){
            if(flag==0 && d>str[i]){
               cout<<d;
               flag=1;
               i--;
            }
            else{
               cout<<str[i];
            }
         }
         if (flag == 0)
         {
            cout << d;
         }
      }
      else if(d=='0'){
         cout<<str<<d;
      }
      else{
         cout<<d<<str;
      }
      cout<<endl;
   }
   return 0;
}