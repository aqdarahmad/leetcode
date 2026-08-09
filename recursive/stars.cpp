
void f(int x)
{
    if(x==0)
    return ;
     
    for(int i=0;i<x;i++)
   {
        cout<<"*";
   }
    cout<<endl;
     f(x-1);
    
    for(int i=0;i<x;i++)
   {
        cout<<"*";
   }
    cout<<endl;
   

}
