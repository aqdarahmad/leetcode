using namespace std;
#include <bits/stdc++.h>

  int sum=0;
int recur(vector<int>v , int i)
{   int s=v.size();
   
    if(i==s-1){
   
     return v[i];
    }
 int ch1=recur(v, i+1);
 sum=ch1+v[i];
 return sum;
}
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
 cin>>v[i];
cout<<recur(v,0); 

    return 0;
}
