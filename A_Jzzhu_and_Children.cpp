#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   vector<int> arr(n);
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int max = 1, max_value = arr[0]/m + ((arr[0]%m !=0)?1:0);
   for(int i=1; i<n; i ++){
      int temp = arr[i] / m + ((arr[i] % m != 0) ? 1 : 0);
      if (temp>=max_value){
         max_value=temp;
         max=i+1;
      }
   }
   cout<<max;
   return 0;
}