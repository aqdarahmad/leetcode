

class Solution {
    vector<vector<int>> grid;
    vector<vector<int>> dp;
    int n;
    int m;
public:
   
  int recur(int x , int y)
 {
    int ch1=INT_MAX;
    int ch2=INT_MAX;
    if(dp[x][y] != -1)
     return dp[x][y];
    if(x==m-1 && y==n-1)
     return grid[x][y];

    if(x+1<m)
    {
        ch1=grid[x][y] + recur(x+1,y);
    }
    if(y+1<n)
     {
        ch2=grid[x][y] + recur(x,y+1);
     }
   dp[x][y]=min(ch1,ch2);
    return  dp[x][y];
 }
  
    int minPathSum(vector<vector<int>>& input) {
       grid=input;
       m=grid.size();
       n=grid[0].size();
       dp=vector<vector<int>>(m,vector<int>(n,-1));
       int ans=recur(0,0);

        return ans;
        
    }

   
};