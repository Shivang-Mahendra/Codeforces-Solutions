#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   string s;
   cin>>s;
   int n = s.size(), l = -1, f = 0;
   for(int i=0; i<n; i++){
      if((s[i] - '0' )%2 == 0){
         if ((s[i] < s[n - 1])){
            swap(s[i], s[n-1]);
            f = 1;
            break;
         }
         l = i;
      }
   }
   if(f){
      cout<<s<<endl;
   }
   else if(l!= -1){
      swap(s[l], s[n-1]);
      cout<<s<<endl;
   }
   else{
      cout<<-1<<endl;
   }
   return 0;
}