#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long n, x, h;
      cin>>n>>x;
      vector<int> v(n);
      for(int i=0; i<n; i++)  cin>>v[i];
      // sort(v.begin(), v.end());
      // h = v[0];
      long long l = 0, r = 2e9+7;
      while(l<r){
         long long mid = (r-l+1)/2 + l;
         // cout<<mid<<endl;
         long long sum = 0;
         for(int i=0; i<n; i++){
            sum += max(mid - v[i], 0LL);
         }
         // int left = 0, right = n - 1, ind = -1;
         // if(x - sum >= 0){
         //    // cout<<"here"<<endl;
         //    while(left<=right){
         //       int m = (right-left)/2 + left;
         //       // if(v[m] == x - sum)
         //       //    ind = m;
         //       if(v[m] >= x - sum){
         //          right = m - 1;
         //       }
         //       else{
         //          ind = m;
         //          left = m + 1;
         //       }
         //    } 
         //    if (ind != -1){
         //       temp += ((x - sum)/(ind + 1));
         //    }
         //    else if(ind == -1 && x - sum >= 0){
         //       int i = 0;
         //       while(v[0] == v[i]) i++;
         //       cout<<ind<<" "<<sum<<endl;
         //       if(x >= i)
         //          temp += (x-sum/i);
         //    }
         //    h = max(h, temp);
         //    // cout<<h<<endl;
         // }
         if(sum <= x)
            l = mid;
         else
            r = mid - 1;
      }
      cout<<l<<endl;
   }
   return 0;
}