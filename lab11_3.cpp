#include<iostream>
using namespace std;
void f1(int k)
{
    try{
        if(k>0)
        {
            throw 5.5;
        }
        if(k<0)
        {
            throw 'A';
        }
        if(k==0)
        {
            throw 30;
        }
    }
catch(int p)
{
    cout<<"exception occured"<<"\n";
}
catch(...)
{
    cout<<"success"<<"\n";
}
}
int main()
{
    f1(10);
    f1(-1);
    f1(0);
    return 0;
}