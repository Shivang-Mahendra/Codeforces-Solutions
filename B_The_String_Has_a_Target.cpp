#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,min=1;
      cin>>n;
      vector<char> str(n),comp(n);
      for(int i=0; i<n; i++){
         cin>>str[i];
      }
      comp = str;
      if(n>1){
         for(int i=2; i<n; i++){
            if(int(str[min])>=int(str[i])){
               min=i;
            }
         }
         char temp = str[min];
         str.erase(str.begin()+min, str.begin()+min+1);
         reverse(str.begin(),str.end());
         str.push_back(temp);
         reverse(str.begin(), str.end());
         if(str[0] <= comp[0] || (str[0]==comp[0] && str[1]<=comp[1])){
            for(int i=0; i<n; i++){
               cout<<str[i];
            }
         }
         else{
            for (int i = 0; i < n; i++)
            {
               cout << comp[i];
            }
         }
         cout<<endl;
      }
      else
         cout<<str[0]<<endl;
   }
   return 0;
}