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
      int n, li;
      cin>>n;
      li = 2 * n;
      vector<int> v(n);
      for(int i=0; i<n; i++)
         cin>>v[i];
      for(int i=0; i<n-1; i++){
         if(v[i+1] % v[i] == 0 && v[i] != 1){
            v[i+1]++;
            li--;
         }
         else if(v[i] == 1 && v[i+1] % v[i] == 0){
            v[i]++;
            li--;
            if(v[i+1] == 2){
               v[i]++;
               li--;
            }
         }
      }
      if(li>=0)
         for(int i=0; i<n; i++)
            cout<<v[i]<<" ";
      else
         cout<<-1;
      cout<<endl;
   }
   return 0;
}