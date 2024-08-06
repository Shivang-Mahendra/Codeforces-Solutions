#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin>>n;
      vector<int> p(n);
      for(int i=0; i<n; i++){
         cin>>p[i];
      }
      string s;
      cin>>s;
      int count1=0;
      for(int i=0; i<n; i++){
         if(s[i] == '1'){
            count1++;
         }
      }
      if(count1 != 0 && count1 != n){
         vector<int> p1(n);
         int j = count1, k=0;
         for(int i=0; i<n; i++){
            if(s[i] == '1'){
               p1[k++] = p[i]; 
            }
            else{
               p1[j++] = p[i]; 
            }
         }
         sort(p1.begin(), p1.begin()+count1,greater<>());
         sort(p1.begin() + count1, p1.end(), greater<>());
         map<int,int> m;
         for(int i=0; i<n; i++){
            m[p1[i]] = n-i;
         }
         for(int i=0; i<n; i++){
            p[i] = m[p[i]];
         }
      }
      for (int i = 0; i < n; i++)
      {
         cout << p[i] << " ";
      }
      cout<<endl;
   }
   return 0;
}