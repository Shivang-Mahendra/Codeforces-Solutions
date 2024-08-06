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
      int n, f = 0;
      cin >> n;
      vector<int> v(n, 0);
      for(int i=0; i<n; i++){
         int s = 0;
         for(int j=0; j<n; j++){
            char x;
            cin>>x;
            // cout<<x<<endl;
            s += (x -'0');
         }
         // cout<<s<<" ";
         v[i] = s;
      }
      // cout<<endl;
      // for(int i=0; i<n; i++){
      //    cout<<v[i]<<" ";
      // }
      for(int i=0; i<n-1; i++){
         if(v[i] != v[i+1] && v[i] != 0 && v[i+1] != 0){
            f=1;
            break;
         }
      }
      if(f){
         cout<<"TRIANGLE"<<endl;
      }
      else{
         cout<<"SQUARE"<<endl;
      }
   }
   return 0;
}