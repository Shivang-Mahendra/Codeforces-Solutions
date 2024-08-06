#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n,c,d,flag=0,cost=0;
      cin>>n>>c>>d;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
         cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      for(int i=0; i<n; i++){
         if(arr[i] == i+1)
            continue;
         if(i+1 < n && arr[i+1] == i+1){
            arr.erase(arr.begin()+i, arr.begin()+i+1);
            n--;
            i--;
            cost+=c;
         }
         else{
            arr.insert(arr.begin()+i, i+1);
            cost+=d;
            n++;
         }
      }
      // for (int i = 0; i < n; i++)
      // {
      //    if (arr[i] == i + 1)
      //    {
      //       flag++;
      //    }
      // }
      cout<<cost<<endl;
   }
   return 0;
}