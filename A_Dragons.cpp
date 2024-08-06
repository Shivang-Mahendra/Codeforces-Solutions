#include<bits/stdc++.h>
using namespace std;
int main(){
   int power, n, i;
   cin>>power>>n;
   vector< pair<int,int> > dragon(n);
   for(i=0; i<n; i++){
      cin >> dragon[i].first >> dragon[i].second;
   }
   sort(dragon.begin(), dragon.end());
   for(i=0; i<n; i++){
      if(dragon[i].first < power){
         power += dragon[i].second;
      }
      else{
         cout<<"NO";
         return 0;
      }
   }
   cout<<"YES";
   return 0;
}