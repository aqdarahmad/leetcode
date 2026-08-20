using namespace std;
#include <bits/stdc++.h>
void solve()
{
 int arr[]={3,6,2,1,4};
 int prefix[5]={};
 prefix[0]=arr[0];
 
 for(int i=1;i<5;i++)
  {
    prefix[i]=prefix[i-1]+arr[i];
  }
  for(int x:prefix)
   cout<<x<<" ";
}


int main()
{
   
    
    solve();

return 0;
}