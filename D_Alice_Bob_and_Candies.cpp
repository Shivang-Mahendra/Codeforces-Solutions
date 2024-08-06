#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, a = 0, b = 0, m = 0;
      cin>>n;
      vector<int> c(n);
      for(int i=0; i<n; i++)
         cin>>c[i];
      int i = 0, j = n-1, prev = 0;
      while(i<=j){
         int temp = 0;
         while(i<=j && temp <= prev){
            temp += c[i];
            i++;
         }
         m++;
         a += temp;
         prev = temp;
         if(i>j)
            break;
         temp = 0;
         while (i <= j && temp <= prev){
            temp += c[j];
            j--;
         }
         m++;
         b += temp;
         prev = temp;
      }
      cout<<m<<" "<<a<<" "<<b<<endl;
   }
   return 0;
}