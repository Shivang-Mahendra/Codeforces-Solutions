#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int x,y,a,b,cost=0;
      cin>>x>>y>>a>>b;
      if(x==0 && y==0)
         cout<<0<<endl;
      else{
         int cost_x = abs(x);
         int cost_y = abs(y);
         if(2*a > b){
            cost = min(cost_x, cost_y) * b + (max(cost_x, cost_y) - min(cost_x, cost_y))*a;
         }
         else{
            cost = cost_x*a + cost_y*a;
         }
         cout<<cost<<endl;
         // if(x>=0 && y>=0){
         //    while(x!=0 && y!=0 && 2*a > b){
         //       x--;
         //       y--;
         //       cost+=b;
         //    }
         //    while(x!=0){
         //       cost+=a;
         //       x--;
         //    }
         //    while(y!=0){
         //       cost+=a;
         //       y--;
         //    }
         //    cout<<cost<<endl;
         // }
         // else if(x<0 && y<0){
         //    while (x != 0 && y != 0 && 2 * a > b)
         //    {
         //       x++;
         //       y++;
         //       cost += b;
         //    }
         //    while (x != 0)
         //    {
         //       cost += a;
         //       x++;
         //    }
         //    while (y != 0)
         //    {
         //       cost += a;
         //       y++;
         //    }
         //    cout << cost << endl;
         // }
         // else{
         //    if(x>=0){
         //       while(x!=0){
         //          x--;
         //          cost+=a;
         //       }
         //    }
         //    else{
         //       while(x!=0){
         //          x++;
         //          cost+=a;
         //       }
         //    }
         //    if(y>=0){
         //       while (y != 0)
         //       {
         //          y--;
         //          cost += a;
         //       }
         //    }
         //    else{
         //       while (y != 0)
         //       {
         //          y++;
         //          cost += a;
         //       }
         //    }
         //    cout<<cost<<endl;
         // }
      }
   }
   return 0;
}