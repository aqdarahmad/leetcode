void binary(int x)
{ vector<int>v;
    int c=x;
    int r=0;
    while(x!=0){
    c=x/2;
    r=x%2;
    v.push_back(r);
    x=x/2;
   
    }
    for(int b=v.size()-1;b>=0;b--)
    cout<<v[b];
    
}