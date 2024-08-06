#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
      long long odd=0;
      vector<long long> balls(4);
      for(int i = 0; i < 4; i++){
         cin >> balls[i];
      }
      long long mini = min(balls[0], min(balls[1], balls[2]));
      for(int i = 0; i<3; i++){
         balls[i] -= mini;
      }
      balls[3] += (3*mini);
      for(int i = 0; i < 4; i++){
         if(balls[i] % 2 != 0){
            odd++;
         }
      }
      if(odd <= 1){
         cout << "Yes" << endl;
         continue;
      }
      for(int i = 0; i < 3; i++){
         balls[i] += mini;
      }
      balls[3] -= (3*mini);
      mini = max(0LL, mini-1);
      for(int i = 0; i < 3; i++){
         balls[i] -= mini;
      }
      balls[3] += (3*mini);
      odd = 0;
      for (int i = 0; i < 4; i++)
      {
         if (balls[i] % 2 != 0)
         {
            odd++;
         }
      }
      if (odd <= 1)
      {
         cout << "Yes" << endl;
         continue;
      }
      cout << "No" << endl;
   }
   return 0;
}