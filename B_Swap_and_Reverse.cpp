#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k;
      string s;
      cin >> n >> k >> s;
      if(k%2 == 0){
         sort(s.begin(), s.end());
         cout << s << endl;
         continue;
      }
      string ev = "", od = "";
      for(int i=0; i<n; i++){
         if(i%2 == 0){
            ev += s[i];
         }
         else{
            od += s[i];
         }
      }
      sort(ev.begin(), ev.end());
      sort(od.begin(), od.end());
      for(int i=0; i<=n/2; i++){
         if(i<ev.size())
            cout<<ev[i];
         if(i<od.size())
            cout<<od[i];
      }
      cout<<endl;
   }
   return 0;
}