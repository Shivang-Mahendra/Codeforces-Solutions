#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<pair<int,string> > time(n);
      for(int i=0; i<n; i++){
         int ti;
         cin>>ti;
         string s;
         cin >> s;
         time[i] = make_pair(ti,s);
      }
      // for(int i=0; i<n; i++){
      //    cout<<time[i].first<<" "<<time[i].second<<endl;
      // }
      int flag1=0,flag2=0,flag3=0;
      int t1=INT_MAX, t2=INT_MAX, t3=INT_MAX;
      for(int i=0; i<n; i++){
         if(time[i].second == "01" && t1 > time[i].first){
            t1 = time[i].first;
            flag1 = 1;
            // cout<<1<<endl;
         }
         else if (time[i].second == "10" && t2 > time[i].first)
         {
            t2 = time[i].first;
            flag2 = 1;
            // cout<<2<<endl;
         }
         if (time[i].second == "11" && t3 > time[i].first)
         {
            t3 = time[i].first;
            flag3 = 1;
            // cout<<3<<endl;
         }
      }
      if(flag1 && flag2 && flag3){
         cout<<min(t1+t2, t3)<<endl;
      }
      else if(flag1 && flag2){
         cout<<t1+t2<<endl;
      }
      else if(flag3){
         cout<<t3<<endl;
      }
      else{
         cout<<-1<<endl;
      }
}
   return 0;
}