#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, x;
      ll sum = 0;
      cin>>n;
      unordered_map<int,int> m;
      for(int i =0; i<n; i++){
         cin>>x;
         sum += x;
         if(x%3 == 1){
            m[1]++;
         }
         else if(x%3 == 2){
            m[2]++;
         }
      }
      if(sum % 3 == 0)
         cout<<0<<endl;
      else if(sum % 3 == 1){
         if(m[1] != 0){
            cout<<1<<endl;
         }
         else{
            cout<<2<<endl;
         }
      }
      else{
         if (m[2] != 0)
         {
            cout << 1 << endl;
         }
         else
         {
            cout << 1 << endl;
         }
      }
   }
   return 0;
}