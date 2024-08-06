#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k,burls=0;
      cin>>n>>k;
      vector<int> countA(26,0), counta(26,0);
      for(int i=0; i<n; i++){
         char ch;
         cin>>ch;
         if(ch>='A' && ch<='Z'){
            countA[ch-'A']++;
         }
         else{
            counta[ch-'a']++;
         }
      }
      for(int i=0; i<26; i++){
         int mini = min(countA[i],counta[i]);
         int maxi = max(countA[i],counta[i]);
         burls += mini;
         if(k>0){
            maxi -= mini;
            burls += min(k,(maxi/2));
            k -= (maxi/2);
         }
      }
      cout << burls << endl;
   }
   return 0;
}