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
      cin>>n;
      int si = 2*n - 2;
      vector<string> v(si);
      for(int i=0; i<si; i++){
         cin>>v[i];
      }
      // if(n == 2){
      //    if(v[0] == v[1])
      //       cout<<"YES"<<endl;
      //    else
      //       cout<<"NO"<<endl;
      //    continue;
      // }
      // sort(all(v));
      // for(int i=0; i<si; i++){
      //    cout<<v[i]<<" ";
      // }
      // cout<<endl;
      // if (s1[0] == s2[1])
      // {
      //    ans += s2;
      //    ans += s1[n - 2];
      // }
      // else
      // {
      //    ans += s1;
      //    ans += s2[n - 2];
      // }
      string s1 = "", s2 = "";
      // if(n%2){
      //    for(int i=0; i<si; i++){
      //       if(v[i].size() == n/2 + 1){
      //          if(s1=="")
      //             s1 = v[i];
      //          else  
      //             s2 = v[i];
      //       }
      //    }
      // }
      // else{
         for (int i = 0; i < si; i++){
            if (v[i].size() == n / 2){
               if (s1 == "")
                  s1 = v[i];
               else
                  s2 = v[i];
            }
         }
      // }
      string ans;
      if(n%2 == 0)
         ans = s1+ s2;
      else
         ans = s1+ " "+s2;
      // cout<<ans<<endl;
      bool flag = 0;
      for(int i=0; i<n/2; i++){
         if(ans[i] != ans[n-1-i]){
            flag = 1;
            break;
         }
      }
      if(flag)
         cout<<"NO"<<endl;
      else
         cout<<"YES"<<endl;
   }
   return 0;
}