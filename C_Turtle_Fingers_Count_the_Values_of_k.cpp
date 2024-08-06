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
      int k = 0, x, y;
      unordered_set<int> s;
      int a,b,l;
      cin>>a>>b>>l;
      x = log10(l)/log10(a);
      y = log10(l)/log10(b);
      // cout<<x<<" "<<y<<endl;
      for(int i=0; i<=x; i++){
         for(int j=0; j<=y; j++){
            // cout << i << " " << j << " " << pow(a, i) << " " << pow(b, j) << " " << l / (pow(a, i) * pow(b, j)) << " " << l % ((int)pow(a, i) * (int)pow(b, j)) << endl;
            // ;
            int temp = ((floor(pow(a, i))) * (floor(pow(b, j))));
            // cout<< (int)pow(a,i) <<" "<< pow(b,j)<<" " << temp<<endl;
            if (l % temp == 0){
               s.insert(l/temp);
            }
            else if(l < temp)
               break;
         }
         // cout<<endl;
      }
      for(int i=0; i<=y; i++){
         for(int j=0; j<=x; j++){
            // cout<<i<<" "<<j<<endl;
            int temp = ((floor(pow(a, i))) * (floor(pow(b, j))));
            if (l % temp == 0)
            {
               s.insert(l / temp);
            }
            else if (l < temp)
               break;
         }
         // cout<<endl;
      }
      // for(int it : s){
      //    cout<<it<<" ";
      // }
      // cout<<endl;
      // if(s.size())
         cout<<s.size()<<endl;
      // else
      //    cout<<1<<endl;
   }
   return 0;
}