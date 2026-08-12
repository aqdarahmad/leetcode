class Solution {
    int n;

vector<int>dp;
vector<int>v;
public:
int recur(int x)
{
    if(x>=n)
     return 0;
  
    if(dp[x]!=-1)
     return dp[x]; 
    int ch1=INT_MAX;
     int ch2=INT_MAX;
   ch1=abs(v[x]) + recur(x+1);
   
     ch2=abs(v[x]) + recur(x+2);
     
   dp[x]=min(ch1,ch2);
   return dp[x]; 

}
  
    int minCostClimbingStairs(vector<int>& cost) {
        n=cost.size();
        v=cost;
        dp=vector<int>(n+1,-1);
        return min(recur(0),recur(1));
    }
};