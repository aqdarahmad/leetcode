using namespace std;
#include <bits/stdc++.h>
 
void swap(long long &x , long long &y)
{
    long long temp=x;
    x=y;
    y=x;
    cout<<x<<" "<<temp;
}
int main() 
{
  long long x,y;
  cin>>x>>y;
  swap(x,y);
  
  
 
return 0;
}