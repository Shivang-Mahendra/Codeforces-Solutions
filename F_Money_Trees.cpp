#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n, k, ans = 0;
      cin>>n>>k;
      vector<int> a(n), h(n);
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      for (int i = 0; i < n; i++){
         cin >> h[i];
      }
      // if(n == 1){
      //    if (a[0] <= k)
      //       cout << 1 << endl;
      //    else
      //       cout<< 0 <<endl;
      //    continue;
      // }
      int i = 0, j = 0, sum = 0, temp = 0;
      while(j<n){
         int f = 0;
         // cout<<temp<<" " << j <<endl;
         while(j < n && sum <= k){
            if ((i != j && h[j - 1] % h[j] != 0))
               break;            
            sum += a[j];
            // if(sum > k)
            //    break;
            temp++;
            // cout<<sum<<" " << j<<endl;
            f = 1;
            j++;
         }
         if(sum <= k)
            ans = max(ans, temp);
         else
            ans = max(ans, temp-1);
         // cout << "ans "<<ans << endl;
         if (j>0 && j<n && h[j - 1] % h[j] == 0){
            while (sum > k)
            {
               sum -= a[i];
               temp--;
               i++;
            }
            // j--;
         }
         else{
            i = j;
            sum = 0;
            temp = 0;
         }
         if(f == 0)
            j++;
      }
      cout<<ans<<endl;
   }
   return 0;
}