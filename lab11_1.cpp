#include<iostream>
using namespace std;
int main()
{
    int x,y,j;
    cout<<"enter the value of x and y:";
    cin>>x>>y;
    j=x>y?0:1;
    try
    {
        if(j==0)
        {
            cout<<x-y;
        }
        else
        throw j;
    }
    catch(int p)
    {
        cout<<"exception occured";
    }
    
}