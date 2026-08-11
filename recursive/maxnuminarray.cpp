using namespace std;
#include <bits/stdc++.h>


int recur(vector<int>v , int i)
{   int s=v.size();

    if(i==s-1){
   
     return v[i];
    }
 int ch1=recur(v, i+1);


 return max(ch1,v[i]);
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
