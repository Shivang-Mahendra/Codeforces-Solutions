#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k, cnt=1;
      cin >> n >> k;
      vector<string> str(n);
      for(int i = 0; i < n; i++){
         cin>>str[i];
      }
      for(int i=1; i<n; i++){
         if(str[0] == str[i]){
            cnt++;
         }
      }
      cout << cnt << endl;
   }
   return 0;
}