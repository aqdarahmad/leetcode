using namespace std;
#include <bits/stdc++.h>

void solve()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];

 vector<long long>odd,even;

 for(int i=0;i<n;i++) 
 {
    if(v[i]%2==0)
     {
       even.push_back(v[i]);
     }
     else
     {
          odd.push_back(v[i]);
     }
 }
 if(is_sorted(even.begin(),even.end()) && is_sorted(odd.begin(),odd.end()))
  {
    cout<<"Yes"<<endl;
  }
  else
    cout<<"No"<<endl;

  cout<<endl;  
}

int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}




return 0;
}