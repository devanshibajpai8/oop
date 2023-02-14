#include<iostream>
using namespace std;
template<class T>
class A
{
    T a;
    T b;
    public:
    A()
    {
        cout<<"enter the values of a and b:"<<"\n";
        cin>>a>>b;
    }
    T get()
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    A<int>t1;
    A<float>t2;
    cout<<"larger element:"<<t1.get()<<"\n";
    cout<<"larger element:"<<t2.get();
}