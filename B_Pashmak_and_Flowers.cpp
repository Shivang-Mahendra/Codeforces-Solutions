#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   unordered_map<int, long long> m;
   for(int i=0; i<n; i++){
      cin>>a[i];
      m[a[i]]++; 
   }
   sort(a.begin(), a.end());
   cout<<a[n-1] - a[0]<<" ";
   if(a[0] == a[n-1])
      cout<<((m[a[0]]-1) * (m[a[0]]))/2;
   else
      cout<<m[a[0]] * m[a[n-1]];
   return 0;
}