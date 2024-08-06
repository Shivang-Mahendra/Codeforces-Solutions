#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n,m,k,number;
   cin>>n>>m>>k;
   number = ((n+k-1)/k) * ((m+k-1)/k);
   cout<<number;
}