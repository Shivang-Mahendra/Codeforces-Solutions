#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int n = s.size(), k, sum = 0;
   cin>>k;
   vector<int> weights(26);
   for(int i=0; i<26; i++){
      cin>>weights[i];
   }
   for(int i=0; i<n; i++){
      sum += (weights[s[i]-'a']*(i+1));
   }
   int max = *max_element(weights.begin(), weights.end());
   while(k){
      n++;
      k--;
      sum += (n*max);
   }
   cout << sum;
   return 0;
}