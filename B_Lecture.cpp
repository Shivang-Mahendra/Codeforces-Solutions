#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   vector<pair<string,string>> words(m);
   for(int i=0; i<m; i++){
      cin >> words[i].first >> words[i].second;
   }
   vector<string> lecture(n), ans(n);
   for(int i=0; i<n; i++){
      cin>>lecture[i];
   }
   for(int i=0; i<lecture.size(); i++){
      for(int j=0; j<words.size(); j++){
         if(lecture[i] == words[j].first){
            if(words[j].first.length() > words[j].second.length()){
               ans.push_back(words[j].second);
            }
            else{
               ans.push_back(words[j].first);
            }
            break;
         }
      }
   }
   for(int i=0; i<ans.size()-1; i++){
      cout<<ans[i]<<" ";
   }
   cout<<ans[ans.size()-1];
   return 0;
}