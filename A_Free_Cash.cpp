#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,cashes=1,temp=1;
   cin>>n;
   vector<pair<int, int>> time(n);
   for(int i = 0; i < n; i++){
      cin >> time[i].first >> time[i].second;
   }
   for(int i = 0; i < n-1; i++){
      if(time[i].first == time[i + 1].first && time[i].second == time[i + 1].second){
         temp++;
      }
      else if ((time[i].first != time[i + 1].first || time[i].second != time[i + 1].second) && temp > cashes)
      {
         cashes = temp; 
         temp = 1;
      }
      else if (time[i].first != time[i + 1].first || time[i].second != time[i + 1].second)
      {
         temp = 1;
      }
   }
   cout << max(temp,cashes) << endl;
   return 0;
}