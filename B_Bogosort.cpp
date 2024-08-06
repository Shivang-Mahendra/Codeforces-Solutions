#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      multiset<int> arr;
      for(int i = 0; i < n; i++){
         int x;
         cin >> x;
         arr.insert(x);
      }
      auto it = arr.end();
      it--;
      while(it != arr.begin()){
         cout<< *it << " ";
         it--;
      }
      cout<< *(arr.begin()) << endl;
   }
   return 0;
}