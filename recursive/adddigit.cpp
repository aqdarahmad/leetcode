
int add(int x)
{
    if(x==0)
    return 0;

    return x%10 + add(x/10);
}