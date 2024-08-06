#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, count = 0, flag = 0, x, y; 
   cin >> n;
   vector<pair<int,int>> points(n);
   for(int i=0; i<n; i++){
      cin>>x>>y;
      points[i] = make_pair(x,y);
   }
   // for(int i=0; i<n; i++){
   //    cout<<points[i].first<<" "<<points[i].second<<endl;
   // }
   for(int i=0; i<n; i++){
      int flag = 0;
      for(int j=0; j<n; j++){
         if(i!=j && points[i].second == points[j].second  && points[i].first < points[j].first){
            flag++;
            break;
         }
      }
      for (int j = 0; j < n; j++)
      {
         if (i != j && points[i].second == points[j].second && points[i].first > points[j].first)
         {
            flag++;
            break;
         }
      }
      for (int j = 0; j < n; j++)
      {
         if (i != j && points[i].first == points[j].first && points[i].second < points[j].second)
         {
            flag++;
            break;
         }
      }
      for (int j = 0; j < n; j++)
      {
         if (i != j && points[i].first == points[j].first && points[i].second > points[j].second)
         {
            flag++;
            break;
         }
      }
      if(flag == 4){
         count++;
      }
   }
   cout<<count;
   return 0;
}