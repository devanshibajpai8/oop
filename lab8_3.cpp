#include<iostream>
using namespace std;
class A
{
    public:
    int x,y;
    void get()
    {
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<y;
    }
};
class B:public A
{
    void sum()
    {
        cout<<x+y;
    }
};
int main()
{
    A a;
    A *a1;
    B b1;
    a1=&b1;
    a1->get();
    a1->display();
}
