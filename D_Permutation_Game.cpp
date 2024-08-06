#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   ofstream out("user.out");
   int t;
   cin>>t;
   while(t--){
      ll n, k, sb, ss;
      cin>>n>>k>>sb>>ss;
      vector<ll> p(n), a(n);
      for(int i=0; i<n; i++)
         cin>>p[i];
      for(int i=0; i<n; i++)
         cin>>a[i];
      ll b_score = 0, s_score = 0;
      if(p[sb - 1] == sb && p[ss - 1] == ss){
         s_score = a[ss - 1];
         b_score = a[sb - 1];
      }
      else{
         ll b=0, s=0;
         for(ll i=1; i<=k; i++){
            s_score += a[ss - 1];
            b_score += a[sb - 1];
            s = max(s, s_score + (a[ss-1] * (k - i)));
            b = max(b, b_score + (a[sb-1] * (k - i)));
            if(p[sb-1] == sb && p[ss-1] == ss)
               break;
            // if(a[sb - 1] < a[p[sb - 1] - 1])
               sb = p[sb - 1];
            // if(a[ss - 1] < a[p[ss - 1] - 1])
               ss = p[ss - 1];
         }
         // s_score = *max_element(all(s));
         // b_score = *max_element(all(b));
         s_score = s;
         b_score = b;
      }
      if(s_score > b_score)
         cout<<"Sasha"<<endl;
      else if(s_score < b_score)
         cout<<"Bodya"<<endl;
      else
         cout<<"Draw"<<endl;
   }
   return 0;
}