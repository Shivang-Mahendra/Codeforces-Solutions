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
      string s;
      cin>>s;
      int n = s.length(), ab = 0, ba = 0;
      for(int i=1; i<n; i++){
         if(s[i-1]=='a' && s[i] == 'b')
            ab++;
         else if(s[i-1]== 'b' && s[i] == 'a')
            ba++;
      }
      if(ab == ba){
         cout<<s<<endl;
         continue;
      }
      vector<pair<int, int>> a, b;
      for(int i=0; i<n;){
         if(s[i] == 'a'){
            int j = i;
            while(j<n && s[j] =='a'){
               j++;
            }
            a.push_back({j-i,i});
            i = j;
         }
         else{
            int j = i;
            while(j<n && s[j] =='b'){
               j++;
            }
            b.push_back({j-i,i});
            i = j;
         }
      }
      sort(all(a));
      sort(all(b));
      int k = 0, k1 = 0, n1 = a.size(), m = b.size();
      while(1){
         if(n1 > ab && a[k].first <= b[k1].first){
            int i = a[k].second, c = 0;
            while(c < a[k].first && s[i]=='a'){
               s[i] = 'b';
               i++;
               c++;
            }
            k++;
            n1--;
         }
         else if(m > ba && b[k1].first < a[k].first){
            int i = b[k1].second, c = 0;
            while(c < b[k1].first && s[i]=='b'){
               s[i] = 'a';
               i++;
               c++;
            }
            k1++;
            m--;
         }
         if(m==ba && n1 == ab)
            break;
      }
      cout<<s<<endl;
   }
   return 0;
}