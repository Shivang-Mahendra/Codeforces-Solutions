#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; 
   cin>>t;
   while(t--){
      int n,x,count=0;
      cin >> n;
      vector<int> st(2*n);
      for(int i=0; i<2*n; i++){
         cin >> st[i];
      }
      sort(st.begin(), st.end());
      if(n&1 == 1){
         vector<int> s1(n),s2(n);
         for(int i=0; i<2*n; i++){
            if(i%2==0){
               s1[i/2] = st[i];
            }
            else{
               s2[i/2] = st[i];
            }
         }
         cout<<abs(s1[n/2]-s2[n/2])<<endl;
      }
      else{
         vector<int> s1(n+1), s2(n-1);
         int k=1,l=0;
         s1[0] = st[0];
         for(int i=1; i<2*n; i++){
            if(i%2!=0){
               s1[k++] = st[i];
            }
            else{
               s2[l++] = st[i];
            }
         }
         cout << abs(s1[(n+1) / 2] - s2[(n-1) / 2]) << endl;
      }
   }
   return 0;
}