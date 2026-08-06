using namespace std;
#include <bits/stdc++.h>

int main() {
int n;
int x;
cin>>n>>x;
vector<int>v(n);
for(int i=0;i<n;i++)
 cin>>v[i];

 while(x--)
 {    
     for(int i=0;i<n-1;i++)
      {   
          v[i]=v[i]>>1;
      }
       
 }

  for(int i=0;i<n;i++)
      {
          cout<<v[i]<<" ";
      }
cout<<endl;
    return 0;
}