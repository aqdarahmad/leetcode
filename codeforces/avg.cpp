using namespace std;
#include <bits/stdc++.h>
double avg(vector<double>&v)
{
    double avg=0;
    double sum=0;
    for(int i=0;i<v.size();i++){
     sum+=v[i];
    }
    int x=v.size();
 avg=sum/x;
 return avg;
}
int main() {
int n;
cin>>n;
vector<double>v(n);
for(int i=0;i<n;i++)
 cin>>v[i];
 
cout<<fixed << setprecision(6)<<avg(v); 
    return 0;
}