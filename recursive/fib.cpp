int fib(int x)
{
    if(x==1 || x == 0)
    return 1;
    if(x==2)
    return 1;
return fib(x-1)+fib(x-2);    
}