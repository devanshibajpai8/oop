#include<iostream>
using namespace std;
class ABC
{
    public:
    virtual void display()=0;
    void get()
    {}
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
    BBC b1;
    KBC b2;
    b1.display();
    b2.display();  
}