#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<string> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   vector<int> a(n);
   map<int, int> m;
   int j = 0, k = 0;
   for(int i=0; i<n; i++){
      switch(v[i][0]){
         case '+' :  a[j] = stoi(v[i].substr(2));
                     j++;
                     break;
         case '-' :  int re = stoi(v[i].substr(2));
                     for (int t = 0; t < k; t++){
                        m[a[j]]--;
                        j--;
                        if(j<0){
                           j == 0;
                           break;
                        }
                     }
                     break;
         case '!':   
                     break;
         case '?':   cout<<m.size()<<endl;
                     break;
      }
   }
   return 0;
}