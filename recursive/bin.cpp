
void binary(int x)
{
    if(x==0)
     return;

     binary(x/2);
     cout<<x%2;
}