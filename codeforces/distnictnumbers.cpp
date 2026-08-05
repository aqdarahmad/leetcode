using namespace std;
#include <bits/stdc++.h>
 
void print(vector<long long>&v)
{
    set<long long>s;
    for(int i=0;i<v.size();i++){
      s.insert(v[i]); 
    }
     
     cout<<s.size(); 
}
int main() {
 
  int n;
  cin>>n;
  vector<long long>v(n);
    for(int i=0;i<n;i++){
     cin>>v[i]; 
    }
   
    print(v);
    
 
 
    return 0;
}