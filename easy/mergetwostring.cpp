
string mergetwostrin(string s,string t)
{
    string res="";
    int p1=0;
    int p2=0;

    while(p1<s.size() && p2<t.size()){
        res += s[p1++];
        res += t[p2++];
    }
    while(p1<s.size()){
         res += s[p1++];
    }

     while(p2<t.size()){
         res += t[p2++];
    }
    return res;
}