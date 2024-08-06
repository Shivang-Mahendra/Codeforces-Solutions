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
      int n;
      string s;
      cin>>n>>s;
      int k = s.size();

      if(k==1 || s[0] < s[k-1])
         cout<<s<<endl;
      
      else if(s[0] > s[k-1]){
         string temp = s;
         reverse(s.begin(), s.end());
         cout<< s + temp<< endl;
      }
      
      else{
         int i = 0, j = k-1;
         while(i<j && s[i] == s[j]){
            i++;
            j--;
         }
         if(i==j)
            cout<<s<<endl;
         else{
            if(s[i] > s[j]){
               string temp = s;
               reverse(s.begin(), s.end());
               cout<<s+temp<<endl;
            }
            else{
               cout<<s<<endl;
            }
         }
      }
   }
   return 0;
}