using namespace std;
#include <bits/stdc++.h>
 
long long pow1( long long  x ,  long long  y)
{
   long long ans=1;
       while(y--)
        ans *=x ;
  return ans;
}
int main() 
{
   long long  x,y;
    cin>>x>>y;
    long long s=pow1(x,0)-1;
    for(int i=2;i<=y;i+=2)
     s+=pow1(x,i);
     
    cout<<s<<endl; 
  
  
 
return 0;
}