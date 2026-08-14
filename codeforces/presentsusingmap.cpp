using namespace std;
#include <bits/stdc++.h>

int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   map<int,int>mp;
   for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]=i;
    
   }
   
   for(auto it:mp)
    cout<<it.second + 1<<" ";
cout<<endl;    
    
    

    return 0;
}