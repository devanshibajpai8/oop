#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"in class a";
    }

};
class B
{
    public:
    B()
    {
        cout<<"in class b";
    }
};
class C:public B,public A
{
    public:
    C():A(),B()
    {
        cout<<"in class c";

    }

};
int main()
{
    C c1;
    return 0;
}
