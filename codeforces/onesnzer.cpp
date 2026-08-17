// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() 
{

int n;
cin>>n;
string s;
cin>>s;
int x=n;
stack<char>st;
for(int i=0;i<n;i++)
{
  if(st.empty())
   {
       st.push(s[i]);
   }
   else if(st.top()!=s[i])
   {
       st.pop();
   }
   else
   {
       st.push(s[i]);
   }
   
}
cout<<st.size()<<endl;






return 0;

}
