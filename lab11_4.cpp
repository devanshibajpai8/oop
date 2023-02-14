#include<iostream>
using namespace std;
void f1(int p,int q)
{
    try
    {
        if(p==0)
        {
            throw p;
        }
        else{
            cout<<p-q;
        }
    }
    catch(int k)
    {
        cout<<"\n"<<"exception in sub:"<<k<<"\n";
        throw;
    }
}
int main()
{
    try
    {
        f1(8,5);
        f1(0,10);
    }
    catch(int k)
    {
        cout<<"exception in main";
    }
    return 0;
    
}