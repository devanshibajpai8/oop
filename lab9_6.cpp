#include<iostream>
using namespace std;
template<class T1,class T2>
void sum(T1 x,T2 y)
{
    cout<<x+y<<"\n";
}
template<class A1,class A2,class A3>
void sum(A1 a,A2 b,A3 c)
{
    cout<<a+b+c<<"\n";
}
int main()
{
    int u,v,w;
    float r,s,d;
    cout<<"enter the integer no.:";
    cin>>u>>v>>w;
    cout<<"enter the float no.:";
    cin>>r>>s>>d;
    cout<<"the sum is:";
    sum(u,r);
    sum(u,v,w);
    sum(r,s,u);
}