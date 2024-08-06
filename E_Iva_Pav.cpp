#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      int q;
      cin>>q;
      for(int i=0; i<q; i++){
         int l, k;
         cin >> l >> k;
         int t = -1, temp = a[l - 1];
         if (temp >= k)
         {
            t = l;
            for (int j = l; j < n; j++)
            {
               temp &= a[j];
               if (temp < k)
                  break;
               t = j + 1;
            }
         }
         cout << t << " ";
      }
      cout<<endl;
   }
   return 0;
}