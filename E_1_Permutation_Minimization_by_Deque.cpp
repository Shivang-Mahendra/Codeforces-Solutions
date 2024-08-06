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
      cin>>n;
      deque<int> dq;
      for(int i=0; i<n; i++){
         cin>>x;
         if(dq.empty() || dq.front() > x){
            dq.push_front(x);
         }
         else{
            dq.push_back(x);
         }
      }
      for(auto it : dq){
         cout<<it<<" ";
      }
      cout<<endl;
   }
   return 0;
}