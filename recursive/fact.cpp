int fact(int n)
{  cout<<n<<" ";
    if(n==1)
     return 1;
     cout<<n<<" ";
    if(n==2)
     return 2;
     cout<<n<<" ";
    return n*fact(n-1); 
}