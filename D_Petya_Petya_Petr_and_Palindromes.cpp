#include<bits/stdc++.h>
using namespace std;
int palindromicity(vector<int>& temp, int len){
   int count = 0;
   for(int i=0; i<=len/2; i++){
      if(temp[i] != temp[len-i-1])
         count++;
   }
   return count;
}
int main(){
   int size,len;
   long long sum=0;
   cin>>size>>len;
   vector<int> arr(size);
   for(int i=0; i<size; i++){
      cin>>arr[i];
   }
   for(int i=0; i<size-len+1; i++){
      int k=i;
      vector<int> temp(len);
      for(int j=0; j<len; j++){
         temp[j] = arr[k++];
      }
      sum+=palindromicity(temp , len);
   }
   cout<<sum;
   return 0;
}