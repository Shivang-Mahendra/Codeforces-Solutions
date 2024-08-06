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
      int n;
      ll sum = 0L;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++)
         cin>>a[i];
      sort(all(a));
      for(int i=1; i<n; i++)
         sum += (a[i] - a[i-1]);
      cout<<sum<<endl;
   }
   return 0;
}