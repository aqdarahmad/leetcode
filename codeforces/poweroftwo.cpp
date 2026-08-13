using namespace std;
#include <bits/stdc++.h>

bool check(long long n)
{
    if(n==1)
     return true;
    if(n==0) 
     return false;

   while((n/2)>=1)
   {
    
     if(n%2!=0)
      {
        return false;
      }
     n=n/2;
   } 
   return true; 
}

int main() {
long long n;
cin>>n;
if(check(n))
 cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

    return 0;
}