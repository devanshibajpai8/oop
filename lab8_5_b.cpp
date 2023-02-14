#include<iostream>
using namespace std;
class ABC
{
    public:
    virtual void display()
    {
        cout<<"in base class"<<"\n";
    }
};
class BBC:public ABC
{
    public:
    void display()
    {
        cout<<"in class bbc"<<"\n";
    }
};
class KBC:public ABC
{
    public:
    void display()
    {
        cout<<"in class kbc"<<"\n";
    }
};
int main()
{
    ABC *a,*b;
    BBC b1;
    KBC b2;
    a=&b1;
    b=&b2;
    a->display();
    b->display();
}
