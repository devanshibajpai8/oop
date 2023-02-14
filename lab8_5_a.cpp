#include<iostream>
using namespace std;
class ABC
{
    public:
    void display()
    {
        cout<<"in base class"<<"\n";
    }
};
class BBC:public ABC
{
    public:
    void display()
    {
        cout<<"in class bbc";
    }
};
class KBC:public ABC
{
    public:
    void display()
    {
        cout<<"in class kbc";
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
