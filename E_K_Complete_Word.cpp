#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k, ans = 0;
      cin>>n>>k;
      string s;
      cin>>s;
      for(int i=0; i<k/2; i++){
         vector<int> cnt(26, 0);
         for(int j = 0; j<n; j+=k){
            cnt[s[i + j] - 'a']++;
            cnt[s[j + k - 1 - i] - 'a']++;
         }
         int mx = *max_element(cnt.begin(), cnt.end());
         int req = 2 *(n/k);
         ans += req - mx;
      }
      // cout<<ans<<endl;
      if(k & 1){
         vector<int> cnt(26, 0);
         for(int i=k/2; i<n; i+=k){
            cnt[s[i] - 'a']++;
         }
         int mx = *max_element(cnt.begin(), cnt.end());
         int req = n/k;
         ans += req - mx;
      }
      // int i = 0, j = k, ans = 0;
      // while(i<k){
      //    if(s[i] != s[j]){
      //       if(s[i] == s[n-i-1]){
      //          s[j] = s[i];
      //          if(s[n-j-1] != s[i]){
      //             s[n-j-1] = s[i];
      //             ans++;
      //          }
      //       }
      //       else{
      //          s[i] = s[j];
      //          if(s[n-i-1] != s[j]){
      //             s[n-i-1] = s[j];
      //             ans++;
      //          }
      //       }
      //       ans++;
      //    }
      //    i++;j++;
      // }
      // for(int i=0; i<n/2; i++){
      //    if(s[i] != s[n-i-1]){
      //       ans++;
      //    }
      // }
      cout<<ans<<endl;
   }
   return 0;
}