#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<long long> a(n),b,c;
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      sort(a.begin(), a.end());
      b.push_back(a[0]);
      for(int i=1; i<n; i++){
         bool flag = true;
         for(int j = 0; j < b.size(); j++){
            if(b[j] % a[i] == 0){
               b.push_back(a[i]);
               flag = false;
               break;
            }
         }
         if(flag){
            c.push_back(a[i]);
         }
      }
      if(b.size()!=0 && c.size()!=0){
         cout<<b.size()<<" "<<c.size()<<endl;
         for(int i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
         }
         cout<<endl;
         for (int i = 0; i < c.size(); i++)
         {
            cout << c[i] << " ";
         }
         cout << endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
   return 0;
}