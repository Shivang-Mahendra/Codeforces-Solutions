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
      vector<int> v(3);
      for(int i=0; i<3; i++)
         cin>>v[i];
      sort(v.begin(), v.end());
      cout<<v[1]-v[0] + v[2]-v[1]<<endl;
   }
   return 0;
}