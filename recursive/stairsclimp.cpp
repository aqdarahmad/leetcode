class Solution {
    vector<int> dp;

public:
    int climbStairs(int n) {

        dp = vector<int>(n + 1, -1);

        return recur(n);
    }

    int recur(int n) {

        if(n == 0)
            return 1;

        if(n == 1)
            return 1;

        if(dp[n] != -1)
            return dp[n];

        dp[n] = recur(n - 1) + recur(n - 2);

        return dp[n];
    }
};