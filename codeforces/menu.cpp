using namespace std;
#include <bits/stdc++.h>


void maxnum(vector<int>&v)
{
    set<int>st;
    for(int x:v)
     st.insert(x);
     
cout<<"The maximum number : "<<*(--st.end())<<endl;    
cout<<"The minimum number : "<<*st.begin()<<endl;  
}

bool isprime(int v)
{
    if(v<2)
     return false;
    for(int i=2;i<v;i++)
     {
       if(v%i==0)
          return false;
     }
    
     return true;
    
     
}
bool ispalindrom(int x)
{
    string s = to_string(x);
    string t=s;
    reverse(t.begin(),t.end());
    return t==s;
}
void maxdiv(vector<int>v)
{  int mx=0;
int ans=0;
    for(int i=0;i<v.size();i++)
     {  int c=0;
         for(int j=1;j<=v[i];j++)
          {
              if(v[i]%j==0)
               c++;
          }
          if(c>mx || (c==mx && v[i]>ans))
          {
              mx=c;
              ans=v[i];
          }
          
     }
    cout<<"The number that has the maximum number of divisors : "<<ans<<endl;
}
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
 cin>>v[i];
 
maxnum(v); 
int c=0;
int c2=0;
for(int i=0;i<n;i++)
 {
     if(isprime(v[i])){
      c++;
     }
     if(ispalindrom(v[i])){
         c2++;
     }
 }
 
 cout<<"The number of prime numbers : "<<c<<endl; 
 cout<<"The number of palindrome numbers : "<<c2<<endl;
 maxdiv(v);
    return 0;
}