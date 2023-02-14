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
    void operator --()
    {
        a=a-1;
        b=b-1;
    }
    void operator ++()
    {
        a=a+1;
        b=b+1;
    }
};

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