#include<iostream>
using namespace std;
template<class T>
void find(T a[])
{
    T j=a[0];
    for(int i=0;i<5;i++)
    {
        if(j>a[i])
        {
            j=a[i];
        } 
    }
    cout<<"the minimum value is:"<<j<<"\n";
}

int main()
{
    int a[5];
    cout<<"enter the integer array:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    find(a);
    float p[5];
    cout<<"enter the float array:";
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    find(p);
}