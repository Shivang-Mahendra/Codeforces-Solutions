#include<bits/stdc++.h>
using namespace std;
int main(){
   double n;
   cin >> n;
   double sum = 0.0;
   while(n) {
      sum += 1/n;
      n--;
   }
   printf("%.12lf",sum);
   return 0;
}