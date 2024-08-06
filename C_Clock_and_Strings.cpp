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
      int x, y, c, d;
      cin>>x>>y>>c>>d;
      int t1, t2, t3, t4;
      t1 = min(x,y);
      t2 = max(x,y);
      t3 = min(c,d);
      t4 = max(c,d);
      if(t2 > t4){
         swap(t1, t3);
         swap(t2, t4);
      }
      if(t3 <= t2 && t3 >= t1 && (t4 >= t2 || (t4<=t2 && t4<=t1))){
         cout<<"YES"<<endl;
      }
      else  cout<<"NO"<<endl;
   }
   return 0;
}