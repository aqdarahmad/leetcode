// Recursive Dynamic Programming solution to find the minimum cost of reaching the last position using 1 or 2 jumps.
using namespace std;
#include <bits/stdc++.h>
int n;

vector<int>dp;
vector<int>v;
int recur(int x)
{
    if(x==n-1)
     return 0;
    if(dp[x]!=-1)
     return dp[x]; 
    int ch1=INT_MAX;
     int ch2=INT_MAX;
   ch1=abs(v[x]-v[x+1]) + recur(x+1);
    if(x+2<n)
    {
     ch2=abs(v[x]-v[x+2]) + recur(x+2);
    }  
   dp[x]=min(ch1,ch2);
   return dp[x]; 

}
int main() {
cin>>n;
v=vector<int>(n);

 for (int i = 0; i < n; i++)
        cin >> v[i];
dp=vector<int>(n+1,-1);
cout<<recur(0);


    return 0;
}
