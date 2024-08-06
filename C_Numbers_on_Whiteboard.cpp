#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin >> n;
      vector<int> arr(n);
      cout<<2<<endl;
      cout << n << " " << n - 1 << endl;
      int a = n;
      n-=2;
      while(n>=1){
         cout<< n <<" "<< (a+a-1)/2 + ((a+a-1)%2)?1:0 ;
         cout<<endl;
         a = n+1;
         n--;
      }
   }
   return 0;
}