using namespace std;
#include <bits/stdc++.h>
 
void print(long long n,char x)
{
   
    for(int i=0;i<n;i++){
      cout<<x<<" "; 
    }
     
     cout<<endl; 
}
int main() {
int t;
cin>>t;
while(t--)
{
    long long n;char x;
    cin>>n>>x;
    print(n,x);
    
}
 
    return 0;
}