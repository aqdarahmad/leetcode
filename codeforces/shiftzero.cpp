using namespace std;
#include <bits/stdc++.h>


int main() {

int n;
cin>>n;

vector<long long>v(n);
vector<long long>v2;

for(int i=0;i<n;i++)
 cin>>v[i];
 stack<long long>st;
 for(int i=0;i<n;i++)
 {
     if(v[i]!=0)
     {
         v2.push_back(v[i]);
     }
     else
     {
         st.push(v[i]);
     }
 }
 

 while(!st.empty())
 {
     v2.push_back(st.top());
     st.pop();
 }
for(int i=0;i<n;i++)
 cout<<v2[i]<<" ";
return 0;
}