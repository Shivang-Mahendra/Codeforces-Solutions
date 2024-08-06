#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      string a,b;
      cin>>a>>b;
      int i = 0, j = 0, n = a.size(), pr1 = -1, pr0 = -1, f = 1;
      if(a[0] != b[0] || a[n-1] != b[n-1]){
         cout<<"NO"<<endl;
         continue;
      }
      if(a[0] == a[n-1] && a[0] == b[0] && a[n-1] == b[n-1]){
         cout<<"YES"<<endl;
         continue;
      }
      while(i<n){
         if(a[i] == b[i]){
            // cout << i << endl;
            if(a[i] == '1')
               pr1 = i;
            else  
               pr0 = i;
            i++;
         }
         else{
            int  k = i+1, l = i+1, curr = i;
            if(pr0 != -1){
               while(k<n){
                  if(a[k] == '0' && b[k] == '0'){
                     break;
                  }
                  k++;
               }
               if (k < n){
                  i = k;
                  // pr1 = -1;
               }
               // cout << i << endl;
            }
            if(pr1 != -1 && curr == i){
               while (l < n){
                  if (a[l] == '1' && b[l] == '1'){
                     break;
                  }
                  l++;
               }
               if (l < n){
                  i = l;
                  // pr0 = -1;
               }
               // cout << pr1 << endl;
            }
            if(curr == i){
               cout<<"NO"<<endl;
               f = 0;
               break;
            }
         }
      }
      if(f){
         cout<<"YES"<<endl;
      }
   }
   return 0;
}