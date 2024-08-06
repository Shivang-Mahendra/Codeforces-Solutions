#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long a,b,c;
      cin>>a>>b>>c;
      if(a>=c){
         cout<<-1<<" "<<b<<endl;
      }
      else if(a<=c/b){
         cout<<1<<" "<<-1<<endl;
      }
      else{
         long long i=1;
         while(i*a >= ((i%b==0)?(i/b):(i/b +1))*c){
            i++;            
         }
         cout<<i<<" ";
         i = b;
         while(i*a >= i*c){
            i+=b;
         }
         cout<<i<<endl;
      }
   }
   return 0;
}

//CODE CHEF STARTERS 85 LAST QUESTION GCD queries


// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int x, int k)
// {
//    int GCD = 1;
//    for (int i = 2; i <= min(x, k); i++)
//    {
//       if (x % i == 0 && k % i == 0)
//       {
//          GCD = i;
//       }
//    }
//    return GCD;
// }
// int main()
// {
//    int t;
//    cin >> t;
//    while (t--)
//    {
//       int n;
//       cin >> n;
//       vector<int> arr(n);
//       for (int i = 0; i < n; i++)
//       {
//          cin >> arr[i];
//       }
//       sort(arr.begin(), arr.end());
//       int q, j = 0;
//       cin >> q;
//       vector<int> x(q);
//       for (int i = 0; i < q; i++)
//       {
//          cin >> x[i];
//       }
//       while (q--)
//       {
//          int flag = 0;
//          for (int i = 0; i < arr.size(); i++)
//          {
//             if (gcd(x[j], arr[i]) > 1)
//             {
//                cout << arr[i] << " ";
//                flag = 1;
//                arr.erase(arr.begin() + i, arr.begin() + i + 1);
//                break;
//             }
//          }
//          if (!flag)
//          {
//             cout<<arr[0]<<" ";
//             arr.erase(arr.begin(), arr.begin() + 1);
//          }
//          j++;
//       }
//    }
//    return 0;
// }
