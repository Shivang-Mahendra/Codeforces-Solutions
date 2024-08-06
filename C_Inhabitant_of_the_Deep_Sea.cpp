#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
signed main(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      vector<int> ship(n);
      for(int i=0; i<n; i++)  cin>>ship[i];
      int first = k/2;
      int last = k/2;
      if(k%2)
         first++;
      int i = 0, count = 0;
      while(i<n && first!=0){
         if(first>=ship[i]){
            first-= ship[i];
            ship[i] = 0;
            count++;
         }
         else{
            ship[i] -= first;
            first = 0;
         }
         i++;
      }
      i=n-1;
      while(i>=0 && last != 0 && ship[i] != 0 ){
         if(last>=ship[i]){
            last -= ship[i];
            ship[i] = 0;
            count++;
         }
         else{
            ship[i] -= last;
            last = 0;
         }
         i--;
      }
      cout<<count<<endl;
   }
   return 0;
}