#include<iostream>
using namespace std;
template<class T>
void swapp(T x,T y)
{
    T z;
    z=x;
    x=y;
    y=z;
    cout<<x<<" "<<y<<"\n";
}
int main()
{
    int a,b;
    cout<<"enter the integer no:";
    cin>>a>>b;
    swapp(a,b);
    float p,q;
    cout<<"enter the float values:";
    cin>>p>>q;
    swapp(p,q);
    char c,d;
    cout<<"enter the characters:";
    cin>>c>>d;
    swapp(c,d);
}
