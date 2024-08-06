#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   int N = 2*1e5;
   vector<int> v(N+1);
   int sum = 0;
   for(int i=1; i<=N; i++){
      int temp = i;
      while(temp){
         sum += temp%10;
         temp /= 10;
      }
      v[i] = sum;
   }
   while(t--){
      int n;
      cin>>n;
      cout<<v[n]<<endl;
   }
   return 0;
}