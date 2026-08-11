using namespace std;
#include <bits/stdc++.h>
int recur(int a , int b)
{
    if(b==0)
     return 1;
    if(b==1)
     return a;
    int b1 = recur(a,b/2);
   if(b%2==1)
    return a*b1*b1;

 return b1*b1;  
}
int main() {

int a , b;
cin>>a>>b;
cout<<recur(a,b);
    return 0;
}
