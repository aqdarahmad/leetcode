class solution {
    vector<vector<int>>dp;
    vector<vector<int>>grid;

    public:

    int recur(int x,int y)
    {
       int ch1=INT_MAX;
       int ch2=INT_MAX;
       if(dp[x][y]!=-1)
        return dp[x][y];

       if(x==grid.size()-1)
        return grid[x][y];
        
       ch1=grid[x][y]+recur[x+1][y];
        ch2=grid[x][y]+recur[x+1][y+1];
        dp[x][y]=min(ch1,ch2);
        return dp[x][y];
    }

    int minpath(vector<vector<int>>&input)
    {
        grid=input;
        dp.resize(grid.size());

        for(int i=0;i<grid.size();i++)
        {
            dp[i]=vector<int>(grid[i].size(),INT_MAX);
        }
        return recu(0,0);
    }
}

