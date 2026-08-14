using namespace std;
#include <bits/stdc++.h>

void solve()
{
    int a[]={2,3,4,5,6,7,8,9,3,2,1,2,3,4,6};
    // 1 3 3 2 1 2 1 1 1
    // maxelemne+1
    int freq[10]={};
  //  int n=a.size();
    
    for(int i=0;i<15;i++)
     {
         freq[a[i]]++;
     }
     
     for(int x:freq)
      {
          if(x!=0)
           cout<<x<<" ";
      }
      cout<<endl;
}


int main()
{
   
    
    solve();

return 0;
}