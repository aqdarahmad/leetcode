
#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>>grid;
vector<vector<int>>dp;
int recur(int x,int y)
{
    if(dp[x][y]!=-1)
     return dp[x][y];
    if(x==n-1 and y==n-1){
        return grid[x][y];
    }
    int ch=0;
    int ch2=0;
    if(y+1 < n)
      ch= grid[x][y] + recur (x,y+1);
    
    if(x+1<n)
     ch2 = grid[x][y]+ recur(x+1,y);
    dp[x][y]=max(ch,ch2);
    return  dp[x][y];
}



int main() {


cin>>n;
grid=vector<vector<int>>(n,vector<int>(n));
for(int i=0;i<n;i++)
 {
     for(int j=0;j<n;j++){
      cin>>grid[i][j];
     }
 }
dp=vector<vector<int>>(n,vector<int>(n,-1));
int ans=recur(0,0);
cout<<ans<<endl;

    return 0;
}