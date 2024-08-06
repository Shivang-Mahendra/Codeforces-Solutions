#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, countW = 0, min;
      string str;
      cin >> n >> k >> str;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
         if (str[i] == 'W')
            countW++;
         arr[i] = countW;
      }
      min = arr[k - 1];
      for (int i = 1; i <= n - k; i++)
      {
         if (min > (arr[i + k - 1] - arr[i - 1]))
         {
            min = arr[i + k - 1] - arr[i - 1];
         }
      }
      cout << min << endl;

      // Correct but TLE
      //  int n, k, max = INT_MIN, min = INT_MAX;
      //  string str;
      //  cin >> n >> k >> str;
      //  for(int i=0; i<=n-k; i++){
      //     int j=i;
      //     int countW=0;
      //     while(j < i+k){
      //        if(str[j] == 'W'){
      //           countW++;
      //        }
      //        j++;
      //     }
      //     if(min > countW){
      //        min = countW;
      //     }
      //     if(min == 0){
      //        break;
      //     }
      //  }
      //  cout<<min<<endl;
   }
   return 0;
}