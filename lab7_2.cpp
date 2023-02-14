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
        cout<<a<<"\n"<<b;
    }
    friend void operator -(A &);
};
void operator -(A &a11)
    {
        a11.a=10*a11.a;
        a11.b=10*a11.b;
    }
int main()
{
    A a1;
    a1.get(5,7);
    -a1;
    a1.display();
}