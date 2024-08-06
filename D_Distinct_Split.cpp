#include<bits/stdc++.h>
using namespace std;
#include<unordered_set>
// int distinct(string a, string b){
//    unordered_set <char> t1, t2;
//    for(int i=0; i<a.length(); i++){
//       t1.insert(a[i]);
//    }
//    for (int i = 0; i < b.length(); i++)
//    {
//       t2.insert(b[i]);
//    }
//    // cout<< t1.size() <<" "<< t2.size()<<endl;
//    return t1.size() + t2.size();
// }
// int main(){
//    int T;
//    cin>>T;
//    while(T--){
//       int len,max = 0;
//       string s;
//       cin >> len >> s;
//       for(int i=0; i<len-1; i++){
//          if(s[i] == s[i+1]){
//             int temp = distinct(s.substr(0,i+1),s.substr(i,len-i+1));
//             if(temp > max){
//                max = temp;
//             }
//          }
//       }
//       if (max == 0){
//          // vector<int> count(26,0);
//          for(int i=0; i<len; i++){
//             int temp = distinct(s.substr(0, i), s.substr(i, len - i+1));
//             if (temp > max)
//             {
//                max = temp;
//             }
//          }
//       }
//       cout<< max << endl;
//    }
//    return 0;
// }

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      string s;
      cin >> n >> s;
      vector<int> prefix(n), suffix(n);
      unordered_set<char> se;
      for(int i=0; i<n-1; i++){
         se.insert(s[i]);
         prefix[i]  = se.size();
      }
      se.clear();
      for(int i=n-1; i>=0; i--){
         se.insert(s[i]);
         suffix[i] = se.size();
      }
      int maxi = 0;
      for(int i=0; i<n-1; i++){
         maxi = max(maxi, prefix[i]+suffix[i+1]); 
      }
      cout << maxi << endl;
   }
}