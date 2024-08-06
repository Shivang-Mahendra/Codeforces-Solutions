#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define MOD 1000000007
void minStack(stack<int> st, int &mini){
   if(st.empty())
      return;
   int x = st.top();
   st.pop();
   minStack(st, mini);
   mini = min(x, mini);
   st.push(x);
}
int main(){
   stack<int> st;
   int x, n, mini = INT_MAX;
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>x;
      st.push(x);
   }
   minStack(st, mini);
   cout<<mini<<endl;
   for(int i=0; i<n; i++){
      cout<<st.top()<<" ";
      st.pop();
   } 
   return 0;
}