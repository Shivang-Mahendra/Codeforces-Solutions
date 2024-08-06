#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int l,r,max=0,maxdiff=0,n;
      cin>>l>>r;
      for(int i=r; i>=l; i--){
         vector<int> temp;
         n=i;
         while(n){
            temp.push_back(n%10);
            n/=10;
         }
         if(maxdiff <= (*max_element(temp.begin(),temp.end())-*min_element(temp.begin(),temp.end()))){
            max=i;
            maxdiff = (*max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end()));
         }
         if (maxdiff == 9)
         {
            break;
         }
      }
      cout << max << endl;
   }
   return 0;
}