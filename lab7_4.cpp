#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"\n"<<b<<"\n";
    }
    friend void operator --(A &);
    friend void operator ++(A &);
};
void operator --(A &a11)
    {
        a11.a=10*a11.a;
        a11.b=10*a11.b;
    }
    void operator ++(A &a22)
    {
        a22.a=10-a22.a;
        a22.b=10-a22.b;
    }
int main()
{
    A a1,a2;
    a1.get(5,7);
    --a1;
    a1.display();
    a2.get(8,9);
    ++a2;
    a2.display();
}