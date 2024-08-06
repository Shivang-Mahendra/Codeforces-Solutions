#include <bits/stdc++.h>
using namespace std;
int posible(vector<int> &steps, int n, int i, int &count, int cand1, int cand2)
{
   if (i > 40 || (cand1 == -1 && cand2 == -1))
   {
      return -1;
   }
   count++;
   if (cand1 != 1)
      cand1 = posible(steps, n, i + 1, count, 2 * cand1 - 1, 2 * cand1 - 1);
   cand2 = posible(steps, n, i + 1, count, 2 * cand2 + 1, 2 * cand2 + 1);
   if(cand1 == n){
      steps.push_back(1);
      return cand1;
   }
   if (cand2 == n)
   {
      steps.push_back(2);
      return cand2;
   }
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, cand = 1;
      cin >> n;
      if (n % 2 == 0)
      {
         cout << -1 << endl;
      }
      else
      {
         int count = 0, i = 1;
         vector<int> steps;
         cand = posible(steps, n, i, count, cand, cand);
         if(cand == -1){
            cout<<-1<<endl;
         }
         else{
            cout<<count<<endl;
            for(int i=steps.size()-1; i>=0; i--){
               cout<<steps[i]<<" ";
            }
            cout<<endl;
         }
      }
   }
   return 0;
}