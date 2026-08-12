class Solution {
    vector<int>dp;
    int n;
    string s;

    
public:
   int recur(int x)
   {
    if(s[x]=='0')
     return 0;
    if(x==n)
     return 1;
    if(dp[x]!=-1)
     return dp[x];
     int num=0;
     
    int ch1;
    ch1=recur(x+1);;
    int ch2=0;
    if(x+1<n){
     num=(s[x]-'0')*10 + (s[x+1]-'0');
    if(num>=10 && num <= 26)
    ch2=recur(x+2);
    }
   dp[x]=ch1+ch2;

   return dp[x]; 

   }
    int numDecodings(string s) {
        this->s=s;
        n=s.size();
        dp=vector<int>(n+1,-1);
       return recur(0);
    }
};