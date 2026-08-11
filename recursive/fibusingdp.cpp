class Solution {
    vector<int>dp;
public:
 int solve(int n)
    {
           if(n==1) 
         return 1;
        if(n==0)
         return 0;
       if(dp[n]!=-1)
        return dp[n];  
       int b1=solve(n-1);
       int b2=solve(n-2);
        dp[n]=b1+b2;  
       return dp[n] ;
    }
    int fib(int n) {
    dp=vector<int>(n+1,-1);
        
      return solve(n);
    }

   
};