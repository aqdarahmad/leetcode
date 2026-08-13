using namespace std;
#include <bits/stdc++.h>


bool check(long long n)
{  if(n<2)
    return false;
    if(n==2)
     return true;
    for(int i=2;i*i<=n;i++)
     {
        if(n%i==0)
         return false;
     } 
     return true;
}

int main() {
int n;
cin>>n;
string s;
cin>>s;
string substr="";
substr+=s[0];
for(int i=1;i<n;i++)
{   if(s[i]!=substr.back())
      substr+=s[i];
     
}
cout<<substr.size()<<endl;

    return 0;
}