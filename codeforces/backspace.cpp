using namespace std;
#include <bits/stdc++.h>

int main() {
string s;
cin>>s;
deque<char>q;
q.push_back(s[0]);
for(int i=1;i<s.size();i++)
{
    if(s[i]=='<')
     {   if(!q.empty())
         q.pop_back();
     }
     else
     q.push_back(s[i]);
}
while(!q.empty())
 {
     cout<<q.front();
      q.pop_front();
 }

    return 0;
}