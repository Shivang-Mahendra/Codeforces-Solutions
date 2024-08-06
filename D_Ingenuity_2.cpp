#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      int si;
      string ins;
      cin>>si>>ins;
      int n=0, s=0, w=0, e=0;
      for(int i=0; i<n; i++){
         if(ins[i] == 'N')
            n++;
         else if(ins[i] == 'E')
            e++;
         else if (ins[i] == 'W')
            w++;
         else if (ins[i] == 'S')
            s++;
      }
      bool cut = 0;
      int cutns = 0, cutwe = 0;
      if((n != 0 && s != 0)){
         cut = true;
         cutns = min(n, s);
         n -= cutns;
         s -= cutns;
      }
      if(w != 0 && e != 0){
         cut = true;
         cutwe = min(n, s);
         w -= cutwe;
         e -= cutwe;
      }
      if((n%2 || s%2 || e%2 || w%2) || (n==0 && s==0 && w==0 && e==0 && ((cutns<=1 && cutwe ==0)||(cutns==0 && cutwe<=1)))){
         cout<<"NO"<<endl;
         continue;
      }
      string ans = "";
      int r=0, h=0;
      int rns = -1, hns = -1;
      int rwe = -1, hwe = -1;
      for(int i=0; i<si; i++){
         if(ins[i]=='N' && cutns > 0 && (rns == 0 ||rns == -1)){
            ans += 'R';
            cutns--;
            rns = 1; 
         }
         else if (ins[i] == 'N' && cutns > 0 && (hns == 0 || hns == -1)){
            ans += 'H';
            cutns--;
            hns = 1;
         }
         else if (ins[i] == 'S' && cutns > 0 && (rns == 1 || rns == -1)){
            ans += 'R';
            cutns--;
            rns = 0;
         }
         else if (ins[i] == 'S' && cutns > 0 && (hns == 1 || hns == -1)){
            ans += 'H';
            cutns--;
            hns = 0;
         }
         else if(ins[i] == 'W' && cutwe > 0 && (rwe == 0 || rwe == -1)){
            ans += 'R';
            cutwe--;
            rwe = 1;
         }
         else if (ins[i] == 'E' && cutwe > 0 && (rwe == 1 || rwe == -1)){
            ans += 'R'
            cutwe--;
            rwe = 0;
         }
         else if (ins[i] == 'W' && cutwe > 0 && (hwe == 0 || hwe == -1)){
            ans += 'H';
            cutwe--;
            hwe=1;
         }
         else if (ins[i] == 'E' && cutwe > 0 && (hwe == 1 || hwe == -1)){
            ans += 'H';
            cutwe--;
            hwe = 0;
         }
         else{
            
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}