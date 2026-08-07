using namespace std;
#include <bits/stdc++.h>
//6 4 2 7 2 7
//6 10 12 19 21 28
int main() {
long long n,m;
cin>>n>>m;
vector<long long>v(n+1);
vector<long long>pfx(n+1);
for(int i=1;i<=n;i++){
 cin>>v[i];
   pfx[i]=pfx[i-1]+v[i];
}
 //pfx[0]=v[0];
 //for(int i=1;i<=n;i++){
   //  pfx[i]=pfx[i-1]+v[i];
 //}

 while(m--)
 {
     long long l,r;
     cin>>l>>r;
    
     cout << pfx[r] - pfx[l - 1] << endl;
     
 }
    return 0;
}