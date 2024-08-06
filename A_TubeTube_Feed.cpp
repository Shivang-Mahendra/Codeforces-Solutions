#include<bits/stdc++.h>
using namespace std;
int main(){
   int q;
   cin>>q;
   while(q--){
      int n, t, flag=0;
      cin >>n>>t;
      int a1[n],a2[n];
      for(int i=0; i<n; i++){
         cin>>a1[i];
      }
      for (int i = 0; i < n; i++)
      {
         cin >> a2[i];
      }
      vector<pair<pair<int,int>,int>> arr(n);
      for(int i=0; i<n; i++){
         arr[i] = make_pair(make_pair(a2[i],a1[i]),i);
      }
      sort(arr.begin(),arr.end());
      for(int i=n-1; i>=0; i--){
         if(arr[i].second + arr[i].first.second <= t){
            cout<<arr[i].second+1<<endl;
            flag=1;
            break;
         }
      }
      if(!flag){
         cout<<-1<<endl;
      }
   }
   return 0;
}