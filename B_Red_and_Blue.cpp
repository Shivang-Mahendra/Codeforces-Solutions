#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m; 
      cin>>n;
      vector<int> red(n);
      for(int i=0; i<n; i++){
         cin>>red[i];
      }
      for (int i = 1; i < n; i++)
      {
         red[i] += red[i-1];
      }
      cin>>m;
      vector<int> blue(m);
      for(int i=0; i<m; i++){
         cin>>blue[i];
      }
      for (int i = 1; i < m; i++)
      {
         blue[i] += blue[i-1];
      }
      // int org[n+m];
      // int i=0, j=0, k=0; 
      // while(i<n && j<m){
      //    if(red[i]<0 && blue[j]<0){
      //       if(sum_red < sum_blue){
      //          org[k++] = blue[j++];
      //       }
      //       else{
      //          org[k++] = red[i++];
      //       }
      //       // if(i!=n-1 && j!= m-1){
      //       //    if(red[i+1]==blue[j+1]){
      //       //       if(red[i]<blue[j]){
      //       //          org[k++] = blue[j++];
      //       //       }
      //       //       else{
      //       //          org[k++] = red[i++];
      //       //       }
      //       //    }
      //       //    else if(red[i+1]>blue[j+1]){
      //       //       org[k++] = red[i++];
      //       //    }
      //       //    else{
      //       //       org[k++] = blue[j++];
      //       //    }
      //       // }
      //       // else if(i!= n-1 && red[i+1]>=0){
      //       //    org[k++] = red[i++];
      //       // }
      //       // else if(j!=m-1 && blue[j+1]>=0){
      //       //    org[k++] = blue[j++];
      //       // }
      //       // else if(red[i] < blue[j]){
      //       //    org[k++] = blue[j++];
      //       // }
      //       // else{
      //       //    org[k++] = red[i++];
      //       // }
      //    }
      //    else{
      //       if(red[i] < blue[j]){
      //          org[k++] = blue[j++];
      //       }
      //       else{
      //          org[k++] = red[i++];
      //       }
      //    }
      // }
      // while(i<n){
      //    org[k++] = red[i++];
      // }
      // while(j<m){
      //    org[k++] = blue[j++];
      // }
      // for(int i=1; i<m+n; i++){
      //    org[i] = org[i-1]+org[i];
      // }
      int maxi = max(0,*max_element(red.begin(), red.end())) + max(0,*max_element(blue.begin(), blue.end()));
      // if(maxi <= red_total && red_total >= blue_total){
      //    cout<<red_total<<endl;
      // }
      // else if(maxi <= blue_total && blue_total>= red_total){
      //    cout<<blue_total<<endl;
      // }
      if(maxi<0){
         cout<<0<<endl;
      }
      else{
         cout<<maxi<<endl;
      }
   }
   return 0;
}