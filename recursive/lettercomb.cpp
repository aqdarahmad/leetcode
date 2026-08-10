

vector<string>ans;
    vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz","",""};

void recur(int n , string cur , string digits)
{
  if(n==digits.size())
         ans.push_back(cur);
    for(char ch : mp[digits[n]-'0'])
     {
      
        recur(n+1,cur+ch , digits); 
     }
}
vector<string>combi(string digits)
{  
  if(digits.empty())
          return {};
    recur(0,"",digits);
    return ans;

}