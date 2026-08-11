using namespace std;
#include <bits/stdc++.h>
string s;
int n;
bool recur(int l , int r)
{
  if(l==n/2)
   return true;
  if(s[l]!=s[r])
   return false;
 return recur(l+1 , r-1);   
}
int main() {


cin>>s;
n=s.size();
if(recur(0,n-1))
 cout<<"YES"<<endl;
else
cout<<"NO"<<endl; 
    return 0;
}
