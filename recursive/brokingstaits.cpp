// Dynamic Programming with recursion to count the number of ways to reach the end while avoiding blocked cells.
using namespace std;
#include <bits/stdc++.h>
int n;
string s;
vector<int>dp;

int recur(int x)
{  if(x>=n)
   return 0;
  if(x==n-1)
    return 1;
  if(s[x]=='#')
   return 0;

 
  if(dp[x]!=-1)
    return dp[x]; 
   int ch1=0;int ch2=0;int ch3=0;int ch4=0;int ch5=0;
 if(x+1 < n and s[x+1]!='#')  
   ch1=recur(x+1);
 if(x+2 < n and s[x+2]!='#')  
   ch2=recur(x+2); 
  if(x+3 < n and s[x+3]!='#')  
   ch3=recur(x+3);
  if(x+4 < n and s[x+4]!='#')  
   ch4=recur(x+4);

   if(x+5 < n and s[x+5]!='#')  
   ch5=recur(x+5);    
 dp[x]=ch1+ch2+ch3+ch4+ch5;   
return dp[x]; 

}
int main() {
cin>>n;
cin>>s;
dp=vector<int>(n+1,-1);
cout<<recur(0);

    return 0;
}
