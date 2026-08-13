using namespace std;
#include <bits/stdc++.h>

bool check(long long n)
{
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
long long n;
cin>>n;
if(check(n))
 cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

    return 0;
}