#include<iostream>
using namespace std;
int main()
{
    int num,deno,div;
    cout<<"enter the numerator and denominator:";
    cin>>num>>deno;
    try{
        if(deno==0)
        {
            throw deno;
        }
        div=num/deno;
    }
    catch(int p)
    {
        cout<<"exception occured:div by 0 not allowed"<<"\n";
    }
    cout<<"division is:"<<div;
    return 0;
}