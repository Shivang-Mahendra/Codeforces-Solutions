#include<bits/stdc++.h>
using namespace std;
bool comp(const pair < long long, pair<long long, int>> &a, const pair < long long, pair<long long, int>> &b){
   if (a.first == b.first && a.second.first == b.second.first){
      return a.second.second < b.second.second;
   }
   if (a.first == b.first){
      return a.second.first < b.second.first;
   }
   return a.first > b.first;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
      int n,m,h;
      cin>>n>>m>>h;
      vector<pair<long long, pair<long long, int>>> a;
      for(int i=0; i<n; i++){
         vector<int> temp(m);
         for(int j=0; j<m; j++){
            cin>>temp[j];
         }
         sort(temp.begin(), temp.end());
         // long long c = 0, penalty = 0, sum = 0;
         // for(int j=0; j<m; j++){
         //    if(sum + temp[j] > h)
         //       break;
         //    sum += temp[j];
         //    penalty += sum; 
         //    c++;
         // }
         long long c = temp[0] <= h ? 1 : 0, penalty = temp[0] <= h ? temp[0] : 0;
         for (int j = 1; j < m; j++)
         {
            if (temp[j-1] + temp[j] > h)
               break;
            temp[j] += temp[j-1];
            penalty += temp[j];
            c++;
         }
         a.push_back({c, {penalty, i+1}});
      }
      sort(a.begin(), a.end(), comp);
      // for (auto it : a){
      //    cout << it.first << " " << it.second.first << " " << it.second.second << endl;
      // }
      for(int i=0; i<n; i++){
         if(a[i].second.second == 1){
            cout<<i+1<<endl;
            break;
         }
      }
   }
   return 0;
}