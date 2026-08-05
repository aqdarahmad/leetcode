using namespace std;
#include <bits/stdc++.h>
 
void findminmax(vector<long long>&v)
{
    set<long long>s;
    for(int i=0;i<v.size();i++)
     s.insert(v[i]);
     
    cout<<*s.begin()<<" "<<*(--s.end())<<endl; 
}
int main() {
int n;
cin>>n;
vector<long long >v(n);
for(int i=0;i<n;i++)
 cin>>v[i];
 
 findminmax(v);
 
    return 0;
}