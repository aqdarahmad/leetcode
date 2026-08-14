using namespace std;
#include <bits/stdc++.h>
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];

for(int i=1;i<=n;i++)
{
    auto it =  find(v.begin(),v.end(),i);
    cout<<(it-v.begin())+1<<" ";
}
    return 0;
}